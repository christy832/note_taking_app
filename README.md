# Note Taking App
 
Android note-taking app with reminders, backed by a Node/Express API and PostgreSQL.
 
## Features
- Create, edit, and delete notes
- Reminder notifications for notes
- Soft delete (trash) with restore
- Permanent delete from trash
 
## Tech Stack
- Android app: Kotlin, RecyclerView, Retrofit, Coroutines
- Backend API: Node.js, Express
- Database: PostgreSQL
 
## Project Structure
- `app/`: Android client
- `backend-notes-api/`: Express API server
 
## Prerequisites
- Android Studio (with Android SDK)
- JDK 11 (matches Gradle build)
- Node.js 18+ and npm
- PostgreSQL 13+ running locally
 
## Getting Started
 
### 1) Backend API
 
Install dependencies:
```bash
cd backend-notes-api
npm install
```
 
Create the database and table (defaults match `backend-notes-api/index.js`):
```sql
CREATE DATABASE notedb;
 
\c notedb
 
CREATE TABLE notes (
  id SERIAL PRIMARY KEY,
  title TEXT NOT NULL,
  description TEXT NOT NULL,
  reminder_time BIGINT,
  is_deleted BOOLEAN DEFAULT FALSE,
  deleted_at TIMESTAMP
);
```
 
Start the server:
```bash
node index.js
```
 
The API runs on `http://localhost:8080`.
 
If your PostgreSQL credentials differ, update them in `backend-notes-api/index.js`.
 
### 2) Android App
 
Open the project in Android Studio and run the `app` module.
 
API base URL is configured in:
`app/src/main/java/com/example/christy_moussallem_mahmoud_abouchacra_tpnotee/Network/ApiClient.kt`
 
By default it uses `http://10.0.2.2:8080/` for the Android emulator. If you run on a
real device, replace this with your machine's IP address.
 
## Demo Run (Class)
1) Start PostgreSQL.
2) Run the backend API (`node index.js`).
3) Launch the app on the emulator from Android Studio.
4) Add a note, set a reminder, swipe to delete, then restore from Recently Deleted.
 
## Configuration Notes
- Database credentials live in `backend-notes-api/index.js`.
- Emulator networking uses `10.0.2.2` to reach your host machine.
 
## API Endpoints
- `GET /` - health check
- `GET /notes` - list active notes
- `GET /notes/deleted` - list deleted notes
- `GET /notes/:id` - get a note
- `POST /notes` - create note
- `PUT /notes/:id` - update note
- `DELETE /notes/:id` - soft delete (trash)
- `POST /notes/:id/restore` - restore from trash
- `DELETE /notes/:id/force` - permanent delete
 
## Notes
- Reminders schedule notifications; Android 13+ will prompt for notification permission.
- Reminders must be set for a future time.