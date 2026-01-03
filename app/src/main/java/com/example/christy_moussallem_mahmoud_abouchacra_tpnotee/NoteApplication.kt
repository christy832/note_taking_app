package com.example.christy_moussallem_mahmoud_abouchacra_tpnotee

import android.app.Application
import android.app.NotificationChannel
import android.app.NotificationManager
import android.os.Build
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.Repository.NoteRepository
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.network.ApiClient

class NoteApplication : Application() {

    // you already use this in MainActivity / RecentlyDeletedActivity
    lateinit var repository: NoteRepository

    override fun onCreate() {
        super.onCreate()

        // initialize repository like before
        repository = NoteRepository(ApiClient.api)

        // 🔔 create notification channel for reminders
        createNotificationChannel()
    }

    private fun createNotificationChannel() {
        // Notification channels are required from Android O (API 26) onward
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
            val channelId = "note_reminders_channel"
            val channelName = "Note Reminders"
            val channelDescription = "Notifications for note reminders"

            val importance = NotificationManager.IMPORTANCE_HIGH
            val channel = NotificationChannel(channelId, channelName, importance).apply {
                description = channelDescription
            }

            val notificationManager =
                getSystemService(NotificationManager::class.java)

            notificationManager.createNotificationChannel(channel)
        }
    }
}
