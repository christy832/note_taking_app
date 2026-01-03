package com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.View

import android.app.AlarmManager
import android.app.PendingIntent
import android.content.Context
import android.content.Intent
import android.os.Bundle
import android.widget.Button
import android.widget.EditText
import android.widget.TextView
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.R
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.ReminderReceiver

class UpdateActivity : AppCompatActivity() {

    lateinit var editTextTitle: EditText
    lateinit var editTextDescription: EditText
    lateinit var buttonCancel: Button
    lateinit var buttonSave: Button

    private lateinit var buttonPickReminderUpdate: Button
    private lateinit var textViewReminderTimeUpdate: TextView

    var currentId = -1
    private var reminderTimeMillis: Long? = null

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_update)

        supportActionBar?.title = "Update Note"

        editTextTitle = findViewById(R.id.editTextNoteTitleUpdate)
        editTextDescription = findViewById(R.id.editTextNoteDescriptionUpdate)
        buttonPickReminderUpdate = findViewById(R.id.buttonPickReminderUpdate)
        textViewReminderTimeUpdate = findViewById(R.id.textViewReminderTimeUpdate)

        buttonPickReminderUpdate.setOnClickListener {
            pickReminderDateTime()
        }

        buttonCancel = findViewById(R.id.buttonCancelUpdate)
        buttonSave = findViewById(R.id.buttonSaveUpdate)

        getAndSetData()

        buttonCancel.setOnClickListener {
            Toast.makeText(this, "Nothing updated", Toast.LENGTH_SHORT).show()
            finish()
        }

        buttonSave.setOnClickListener {
            updateNote()
        }
    }

    private fun pickReminderDateTime() {
        val calendar = java.util.Calendar.getInstance()

        val datePicker = android.app.DatePickerDialog(
            this,
            { _, year, month, dayOfMonth ->
                calendar.set(java.util.Calendar.YEAR, year)
                calendar.set(java.util.Calendar.MONTH, month)
                calendar.set(java.util.Calendar.DAY_OF_MONTH, dayOfMonth)

                val timePicker = android.app.TimePickerDialog(
                    this,
                    { _, hourOfDay, minute ->
                        calendar.set(java.util.Calendar.HOUR_OF_DAY, hourOfDay)
                        calendar.set(java.util.Calendar.MINUTE, minute)
                        calendar.set(java.util.Calendar.SECOND, 0)
                        calendar.set(java.util.Calendar.MILLISECOND, 0)

                        reminderTimeMillis = calendar.timeInMillis

                        val formatted = java.text.DateFormat
                            .getDateTimeInstance()
                            .format(java.util.Date(reminderTimeMillis!!))

                        textViewReminderTimeUpdate.text = formatted
                        buttonPickReminderUpdate.text = "Change reminder"
                    },
                    calendar.get(java.util.Calendar.HOUR_OF_DAY),
                    calendar.get(java.util.Calendar.MINUTE),
                    true
                )
                timePicker.show()
            },
            calendar.get(java.util.Calendar.YEAR),
            calendar.get(java.util.Calendar.MONTH),
            calendar.get(java.util.Calendar.DAY_OF_MONTH)
        )

        datePicker.show()
    }

    fun updateNote() {
        val updatedTitle = editTextTitle.text.toString()
        val updatedDescription = editTextDescription.text.toString()

        if (updatedTitle.isEmpty() || updatedDescription.isEmpty()) {
            Toast.makeText(this, "Fields cannot be empty", Toast.LENGTH_SHORT).show()
            return
        }

        // 🔔 schedule reminder if set
        reminderTimeMillis?.let { time ->
            scheduleReminder(time, updatedTitle, updatedDescription)
        }

        val intent = Intent()
        intent.putExtra("updatedTitle", updatedTitle)
        intent.putExtra("updatedDescription", updatedDescription)
        intent.putExtra("noteId", currentId)
        intent.putExtra("updatedReminderTimeMillis", reminderTimeMillis ?: -1L)

        setResult(RESULT_OK, intent)
        finish()
    }

    fun getAndSetData() {
        val currentTitle = intent.getStringExtra("currentTitle")
        val currentDescription = intent.getStringExtra("currentDescription")
        currentId = intent.getIntExtra("currentId", -1)

        val currentReminder = intent.getLongExtra("currentReminderTimeMillis", -1L)
        if (currentReminder != -1L) {
            reminderTimeMillis = currentReminder
            val formatted = java.text.DateFormat
                .getDateTimeInstance()
                .format(java.util.Date(currentReminder))
            textViewReminderTimeUpdate.text = formatted
            buttonPickReminderUpdate.text = "Change reminder"
        }

        editTextTitle.setText(currentTitle)
        editTextDescription.setText(currentDescription)
    }

    // 🔔 helper to schedule alarm on update
    private fun scheduleReminder(timeMillis: Long, noteTitle: String, noteDescription: String) {
        if (timeMillis <= System.currentTimeMillis()) {
            Toast.makeText(this, "Reminder time must be in the future", Toast.LENGTH_SHORT).show()
            return
        }

        val alarmManager = getSystemService(Context.ALARM_SERVICE) as AlarmManager

        val intent = Intent(this, ReminderReceiver::class.java).apply {
            putExtra("noteTitle", noteTitle)
            putExtra("noteDescription", noteDescription)
            putExtra("noteId", currentId)
        }

        // If we have a real id, use it so future updates can reuse same requestCode
        val requestCode = if (currentId != -1) currentId else System.currentTimeMillis().toInt()

        val pendingIntent = PendingIntent.getBroadcast(
            this,
            requestCode,
            intent,
            PendingIntent.FLAG_UPDATE_CURRENT or PendingIntent.FLAG_IMMUTABLE
        )

        alarmManager.setAndAllowWhileIdle(
            AlarmManager.RTC_WAKEUP,
            timeMillis,
            pendingIntent
        )

    }
}
