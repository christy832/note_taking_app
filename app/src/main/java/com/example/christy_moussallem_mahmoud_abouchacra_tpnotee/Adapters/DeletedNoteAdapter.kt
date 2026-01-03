package com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.Adapters

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.Model.Note
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.R

class DeletedNoteAdapter(
    private val onRestoreClick: (Note) -> Unit,
    private val onDeleteForeverClick: (Note) -> Unit
) : RecyclerView.Adapter<DeletedNoteAdapter.DeletedNoteViewHolder>() {

    private var notes: List<Note> = emptyList()

    inner class DeletedNoteViewHolder(itemView: View) : RecyclerView.ViewHolder(itemView) {
        val textViewTitle: TextView = itemView.findViewById(R.id.textViewTitle)
        val textViewDescription: TextView = itemView.findViewById(R.id.textViewDescription)
        val imageViewRestore: ImageView = itemView.findViewById(R.id.imageViewRestore)
        val imageViewDeleteForever: ImageView = itemView.findViewById(R.id.imageViewDeleteForever)
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): DeletedNoteViewHolder {
        val view = LayoutInflater.from(parent.context)
            .inflate(R.layout.item_deleted_note, parent, false)
        return DeletedNoteViewHolder(view)
    }

    override fun onBindViewHolder(holder: DeletedNoteViewHolder, position: Int) {
        val currentNote = notes[position]

        holder.textViewTitle.text = currentNote.title
        holder.textViewDescription.text = currentNote.description

        holder.imageViewRestore.setOnClickListener {
            onRestoreClick(currentNote)
        }
        holder.imageViewDeleteForever.setOnClickListener {
            onDeleteForeverClick(currentNote)
        }
    }

    override fun getItemCount(): Int = notes.size

    fun submitList(myNotes: List<Note>) {
        notes = myNotes
        notifyDataSetChanged()
    }
}
