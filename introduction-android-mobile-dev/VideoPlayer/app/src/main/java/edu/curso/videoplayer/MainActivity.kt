package edu.curso.videoplayer

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.net.Uri;
import android.net.Uri.*;
import android.widget.MediaController;
import android.widget.VideoView;
import edu.curso.videoplayer.databinding.ActivityMainBinding


class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        resources.openRawResource(R.raw.johann_pachelbe_canon)

        val mediaController = MediaController(this)
        binding.apply {
            mediaController.setAnchorView(videoView)
            val uri : Uri = parse ("android.resource://" + packageName +
                    "/raw/johann_pachelbe_canon")
            videoView.setMediaController(mediaController)
            videoView.setVideoURI(uri)
            videoView.requestFocus()
            videoView.start()
        }

    }
}