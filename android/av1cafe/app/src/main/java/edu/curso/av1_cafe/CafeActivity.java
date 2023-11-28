package edu.curso.av1_cafe;

import android.os.Bundle;
import android.text.Editable;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

import androidx.annotation.Nullable;
import androidx.appcompat.app.AppCompatActivity;

public class CafeActivity extends AppCompatActivity {

    @Override
    protected void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView();
        Button btnCreditos = findViewById(R.id.btnCreditos);
        btnCreditos.setOnClickListener( e -> { ... codigo ... });
        Editable txt = txtBase.getText();
    }
}
