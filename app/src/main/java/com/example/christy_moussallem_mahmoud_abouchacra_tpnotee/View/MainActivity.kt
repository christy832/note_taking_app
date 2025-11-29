package com.example.christy_moussallem_mahmoud_abouchacra_tpnotee

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.foundation.layout.*
import androidx.compose.material3.*
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContent {
            NoteApp()
        }
    }
}
@OptIn(ExperimentalMaterial3Api::class)
@Composable
fun NoteApp() {
    Scaffold(
        topBar = {
            TopAppBar(
                title = { Text("Note App") }
            )
        }
    ) { padding ->
        HomeScreen(Modifier.padding(padding))
    }
}



@Composable
fun HomeScreen(modifier: Modifier = Modifier) {
    Column(
        modifier = modifier
            .fillMaxSize()
            .padding(16.dp)
    ) {
        Text(text = "Welcome!", style = MaterialTheme.typography.headlineMedium)
    }
}
