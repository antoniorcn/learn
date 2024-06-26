package edu.curso.teste1;

import javafx.fxml.Initializable;
import javafx.scene.control.Label;
import javafx.scene.paint.Color;
import javafx.scene.text.Font;

import java.net.URL;
import java.util.ResourceBundle;

public class LabelTexto extends Label implements Initializable {
    public static final Color COR = Color.web("#000000", 1.0);
    public static final Font FONT = new Font("Arial", 12);
    private boolean debuging;

    public LabelTexto() {
        this("");
    }

    public LabelTexto(String texto) {
        super(texto);
        generateComponent();
    }

    @Override
    public void initialize(URL location, ResourceBundle resources) {
        if (isDebuging()) {
            System.out.println(getClass().getName() + " initialize executado");
        }
        generateComponent();
    }

    public void generateComponent() {
        if (isDebuging()) {
            System.out.println(getClass().getName() + " generateComponent executado");
        }
        this.setTextFill( COR );
        this.setFont( FONT );
        this.setWrapText(true);
    }

    public boolean isDebuging() {
        return debuging;
    }
    public void setDebuging(boolean debuging) {
        this.debuging = debuging;
    }
}
