package com.example.cameracentricapp;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.graphics.Bitmap;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Environment;
import android.provider.MediaStore;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.MediaController;
import android.widget.Toast;
import android.widget.VideoView;

import java.io.File;

public class MainActivity extends AppCompatActivity {

    private ImageView imgvw;
    private Button captureBtn, videoBtn;
    private VideoView videovw;
    private static final int Image_Capture_Code = 1;
    private static final int VIDEO_CAPTURE = 101;
    Uri videoUri;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        imgvw = (ImageView) findViewById(R.id.imageView);
        captureBtn = (Button) findViewById(R.id.button);
        videoBtn = (Button) findViewById(R.id.button2);
        videovw = (VideoView) findViewById(R.id.videoView);

        MediaController mediaController= new MediaController(this);
        mediaController.setAnchorView(videovw);
        videovw.setMediaController(mediaController);


        captureBtn.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View view){
                Intent cam = new Intent(MediaStore.ACTION_IMAGE_CAPTURE);
                startActivityForResult(cam, Image_Capture_Code);
            }
        });

        videoBtn.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View view){
                File mediaFile =
                        new File(Environment.getExternalStorageDirectory()
                                + "/myvideo.mp4");
                if (Build.VERSION.SDK_INT < 24) {
                    videoUri = Uri.fromFile(mediaFile);
                } else {
                    videoUri = Uri.parse(mediaFile.getPath()); // My work-around for new SDKs, worked for me in Android 10 using Solid Explorer Text Editor as the external editor.
                }

                Intent cam = new Intent(MediaStore.ACTION_VIDEO_CAPTURE);

                cam.putExtra(MediaStore.EXTRA_OUTPUT, videoUri);
                startActivityForResult(cam, VIDEO_CAPTURE);
            }
        });
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data){
        super.onActivityResult(requestCode, resultCode, data);

        if(requestCode == Image_Capture_Code){
            if(resultCode == RESULT_OK){
                videovw.setVisibility(View.INVISIBLE);
                Bitmap bp = (Bitmap) data.getExtras().get("data");
                imgvw.setVisibility(View.VISIBLE);
                imgvw.setImageBitmap(bp);
            }
            else if(resultCode == RESULT_CANCELED){
                imgvw.setVisibility(View.INVISIBLE);
                videovw.setVisibility(View.INVISIBLE);
                Toast.makeText(this, "Cancelled", Toast.LENGTH_LONG).show();
            }
        }
        else if(requestCode == VIDEO_CAPTURE){
            if(resultCode == RESULT_OK){
                videovw.setVisibility(View.VISIBLE);
                imgvw.setVisibility(View.INVISIBLE);
                videovw.setVideoURI(videoUri);

                videovw.start();
            }
            else if(resultCode == RESULT_CANCELED){
                imgvw.setVisibility(View.INVISIBLE);
                videovw.setVisibility(View.INVISIBLE);
                Toast.makeText(this, "Cancelled", Toast.LENGTH_LONG).show();
            }
        }
    }
}