package edu.curso.app1_mvvm;
import android.text.TextUtils;
import android.util.Patterns;

import androidx.databinding.BaseObservable;
import androidx.databinding.Bindable;

public class ContatoViewModel extends BaseObservable {
    private Contato contato;



    public ContatoViewModel() {
        contato = new Contato("","", "");
    }

    private String successMessage = "Contato salvo com sucesso";
    private String errorMessage = "Erro ao salvar o contato";

    @Bindable
    private String toastMessage = null;


    public String getToastMessage() {
        return toastMessage;
    }


    private void setToastMessage(String toastMessage) {

        this.toastMessage = toastMessage;
        notifyPropertyChanged(BR.toastMessage);
    }

    @Bindable
    public String getContatoEmail() {
        return contato.getEmail();
    }
    public void setContatoEmail(String email) {
        contato.setEmail(email);
        notifyPropertyChanged(BR.contatoEmail);
    }

    @Bindable
    public String getContatoNome() {
        return contato.getNome();
    }
    public void setContatoNome(String nome) {
        contato.setNome(nome);
        notifyPropertyChanged(BR.contatoNome);
    }

    @Bindable
    public String getContatoTelefone() {
        return contato.getTelefone();
    }
    public void setContatoTelefone(String telefone) {
        contato.setTelefone(telefone);
        notifyPropertyChanged(BR.contatoTelefone);
    }

    public void onSalvarClicked() {
        if (isInputDataValid())
            setToastMessage(successMessage);
        else
            setToastMessage(errorMessage);
    }

    public boolean isInputDataValid() {
        return !TextUtils.isEmpty(getContatoNome()) &&
                Patterns.EMAIL_ADDRESS.matcher(getContatoEmail()).matches() &&
                getContatoTelefone().length() > 5;
    }
}
