package edu.curso.app3_mvc;

import android.os.Bundle;
import androidx.annotation.Nullable;
import androidx.appcompat.app.AppCompatActivity;

public class ContatoActivity extends AppCompatActivity {

    private ContatoControl control;

    @Override
    protected void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.contato_activity);
        control = new ContatoControl( this );
        control.bind();
    }

}
