package edu.curso.app3_mvc;

import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

import androidx.appcompat.app.AppCompatActivity;

import java.util.ArrayList;
import java.util.List;

public class ContatoControl implements View.OnClickListener {

    private final AppCompatActivity app;

    private List<Contato> contatos = new ArrayList<>();
//
//    private Contato contato;

    private Button btnSalvar;
    private Button btnProcurar;
    private EditText txtNome;
    private EditText txtTelefone;
    private EditText txtEmail;

    public ContatoControl(AppCompatActivity app) {
        this.app = app;
    }

    public void bind() {
        btnSalvar = this.app.findViewById(R.id.btnSalvar);
        btnSalvar.setOnClickListener(this);
        btnProcurar = this.app.findViewById(R.id.btnProcurar);
        btnProcurar.setOnClickListener(this);
        txtNome = this.app.findViewById(R.id.txtNome);
        txtTelefone = this.app.findViewById(R.id.txtTelefone);
        txtEmail = this.app.findViewById(R.id.txtEmail);
    }

    public Contato toModel() {
        Contato contato = new Contato();
        contato.setNome( txtNome.getText().toString() );
        contato.setTelefone( txtTelefone.getText().toString() );
        contato.setEmail( txtEmail.getText().toString() );
        return contato;
    }

    public void fromModel(Contato contato) {
        txtNome.setText(contato.getNome());
        txtTelefone.setText(contato.getTelefone());
        txtEmail.setText(contato.getEmail());
    }

    @Override
    public void onClick(View view) {
        if (view.getId() == R.id.btnSalvar) {
            contatos.add(toModel());
            Log.i("ContatoActivity", "Contato Salvo");
        } else if (view.getId() == R.id.btnProcurar) {
            for (Contato c : contatos) {
                if (c.getNome().contains(txtNome.getText().toString())) {
                    fromModel(c);
                    Log.i("ContatoActivity", "Contato " + txtNome.getText().toString() + " Encontrado");
                }
            }
        }
    }
}
