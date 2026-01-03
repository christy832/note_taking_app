package com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.Adapters

import android.content.Intent
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.cardview.widget.CardView
import androidx.recyclerview.widget.RecyclerView
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.R
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.Model.Note
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.View.MainActivity
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.View.UpdateActivity

class NoteAdapter(private val activity: MainActivity) :
    RecyclerView.Adapter<NoteAdapter.NoteViewHolder>() {

    var notes: List<Note> = ArrayList()

    class NoteViewHolder(itemView: View) : RecyclerView.ViewHolder(itemView) {
        val textViewTitle: TextView = itemView.findViewById(R.id.textViewTitle)
        val textViewDescription: TextView = itemView.findViewById(R.id.textViewDescription)
        val cardView: CardView = itemView.findViewById(R.id.cardView)
        val imageViewReminder: ImageView = itemView.findViewById(R.id.imageViewReminder)
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): NoteViewHolder {
        val view: View = LayoutInflater.from(parent.context)
            .inflate(R.layout.note_item, parent, false)

        return NoteViewHolder(view)
    }

    override fun onBindViewHolder(holder: NoteViewHolder, position: Int) {
        val currentNote: Note = notes[position]
        holder.textViewTitle.text = currentNote.title
        holder.textViewDescription.text = currentNote.description

        // 🔔 Show or hide reminder icon
        if (currentNote.reminderTimeMillis != null) {
            holder.imageViewReminder.visibility = View.VISIBLE
        } else {
            holder.imageViewReminder.visibility = View.GONE
        }

        holder.cardView.setOnClickListener {
            val intent = Intent(activity, UpdateActivity::class.java)
            intent.putExtra("currentTitle", currentNote.title)
            intent.putExtra("currentDescription", currentNote.description)
            intent.putExtra("currentId", currentNote.id)

            // pass current reminder so UpdateActivity can show it
            intent.putExtra(
                "currentReminderTimeMillis",
                currentNote.reminderTimeMillis ?: -1L
            )

            activity.updateActivityResultLauncher.launch(intent)
        }
    }

    override fun getItemCount(): Int = notes.size

    fun setNote(myNotes: List<Note>) {
        this.notes = myNotes
        notifyDataSetChanged()
    }

    fun getNote(position: Int): Note = notes[position]
}
