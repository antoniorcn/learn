package edu.curso.teste1;

import javafx.fxml.Initializable;
import javafx.geometry.Insets;
import javafx.scene.control.Label;
import javafx.scene.layout.*;
import javafx.scene.paint.Color;
import javafx.scene.text.Font;

import java.net.URL;
import java.util.ResourceBundle;

public class LabelTitulo extends Label implements Initializable {
    public static final Color COR = Color.web("#9A3A16", 1.0);
    public static final Font FONT = new Font("Arial", 24);
    private boolean debuging;

    public LabelTitulo() {
        this("");
    }

    public LabelTitulo(String texto) {
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
    }

    public boolean isDebuging() {
        return debuging;
    }
    public void setDebuging(boolean debuging) {
        this.debuging = debuging;
    }
}
