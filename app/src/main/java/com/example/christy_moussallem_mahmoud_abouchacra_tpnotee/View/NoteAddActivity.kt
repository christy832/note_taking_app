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
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.R
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.ReminderReceiver

class NoteAddActivity : AppCompatActivity() {
    lateinit var editTextTitle: EditText
    lateinit var editTextDescription: EditText
    lateinit var buttonCancel: Button
    lateinit var buttonSave: Button

    private lateinit var buttonPickReminder: Button
    private lateinit var textViewReminderTime: TextView

    private var reminderTimeMillis: Long? = null

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContentView(R.layout.activity_note_add)

        supportActionBar?.title = "Add Note"
        editTextTitle = findViewById(R.id.editTextNoteTitle)
        editTextDescription = findViewById(R.id.editTextNoteDescription)
        buttonCancel = findViewById(R.id.buttonCancel)
        buttonSave = findViewById(R.id.buttonSave)
        buttonPickReminder = findViewById(R.id.buttonPickReminder)
        textViewReminderTime = findViewById(R.id.textViewReminderTime)

        buttonPickReminder.setOnClickListener {
            pickReminderDateTime()
        }

        buttonCancel.setOnClickListener {
            Toast.makeText(applicationContext, " Nothing saved", Toast.LENGTH_SHORT).show()
            finish()
        }

        buttonSave.setOnClickListener {
            saveNote()
        }

        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main)) { v, insets ->
            val systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars())
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom)
            insets
        }
    }

    private fun pickReminderDateTime() {
        val calendar = java.util.Calendar.getInstance()

        // First: Date picker
        val datePicker = android.app.DatePickerDialog(
            this,
            { _, year, month, dayOfMonth ->
                calendar.set(java.util.Calendar.YEAR, year)
                calendar.set(java.util.Calendar.MONTH, month)
                calendar.set(java.util.Calendar.DAY_OF_MONTH, dayOfMonth)

                // Then: Time picker
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

                        textViewReminderTime.text = formatted
                        buttonPickReminder.text = "Change reminder"
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

    fun saveNote() {
        val noteTitle: String = editTextTitle.text.toString()
        val noteDescription: String = editTextDescription.text.toString()

        // 🔔 schedule reminder if set & in the future
        reminderTimeMillis?.let { time ->
            scheduleReminder(time, noteTitle, noteDescription)
        }

        val intent = Intent()
        intent.putExtra("Title", noteTitle)
        intent.putExtra("Description", noteDescription)
        intent.putExtra("ReminderTimeMillis", reminderTimeMillis ?: -1L)

        setResult(RESULT_OK, intent)
        finish()
    }

    // 🔔 helper to schedule the alarm
    private fun scheduleReminder(timeMillis: Long, noteTitle: String, noteDescription: String) {
        if (timeMillis <= System.currentTimeMillis()) {
            Toast.makeText(this, "Reminder time must be in the future", Toast.LENGTH_SHORT).show()
            return
        }

        val alarmManager = getSystemService(Context.ALARM_SERVICE) as AlarmManager

        val intent = Intent(this, ReminderReceiver::class.java).apply {
            putExtra("noteTitle", noteTitle)
            putExtra("noteDescription", noteDescription)
        }

        // Just use a unique requestCode
        val requestCode = System.currentTimeMillis().toInt()

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
