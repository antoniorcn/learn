package edu.curso.teste1;

import javafx.fxml.Initializable;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Group;
import javafx.scene.control.Label;
import javafx.scene.layout.*;
import javafx.scene.paint.Color;
import javafx.scene.text.Font;

import java.net.URL;
import java.util.ResourceBundle;

public class LabelPreco extends FlowPane implements Initializable {
    public static final Color ANUNCIO_COR = Color.web("#A8BD2D", 1.0);
    public static final Font ANUNCIO_FONT = new Font("Arial", 14);
    public static final Color PREFIXO_COR = Color.web("#4B5615", 1.0);
    public static final Font PREFIXO_FONT = new Font("Arial", 16);
    public static final Color VALOR_COR = Color.web("#4B5615", 1.0);
    public static final Font VALOR_FONT = new Font("Arial", 16);
    public static final Color SUFIXO_COR = Color.web("#4B5615", 1.0);
    public static final Font SUFIXO_FONT = new Font("Arial", 16);
    private final Label lblAnuncio = new Label("");
    private final Label lblPrefixo = new Label("");
    private final Label lblValor = new Label("");
    private final Label lblSufixo = new Label("");

    private boolean debuging;

    public LabelPreco() {
        this("", "", "0,0", "");
    }

    public LabelPreco(String anuncio, String prefixo, String valor, String sufixo) {
        lblAnuncio.setText(anuncio);
        lblPrefixo.setText(prefixo);
        lblValor.setText(valor);
        lblSufixo.setText(sufixo);
        generateComponent();
        // this.setStyle("-fx-background-color: yellow;");
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
        FlowPane pane = new FlowPane();
        lblAnuncio.setTextFill( ANUNCIO_COR );
        lblAnuncio.setFont( ANUNCIO_FONT );
        FlowPane.setMargin(lblAnuncio, new Insets(0, 0, 0, 0));

        lblPrefixo.setTextFill( PREFIXO_COR );
        lblPrefixo.setFont( PREFIXO_FONT );
        FlowPane.setMargin(lblPrefixo, new Insets(0, 0, 0, 0));

        lblValor.setTextFill( VALOR_COR );
        lblValor.setFont( VALOR_FONT );
        FlowPane.setMargin(lblValor, new Insets(0, 0, 0, 0));

        lblSufixo.setTextFill( SUFIXO_COR );
        lblSufixo.setFont( SUFIXO_FONT );
        FlowPane.setMargin(lblSufixo, new Insets(0, 0, 0, 0));

        this.getChildren().addAll(lblAnuncio, lblPrefixo, lblValor, lblSufixo);
//        pane.setAlignment(Pos.CENTER_LEFT);
        this.computePrefWidth (Region.USE_PREF_SIZE);
        this.computePrefHeight(Region.USE_PREF_SIZE);
//        this.getChildren().add(pane);
    }

    public boolean isDebuging() {
        return debuging;
    }
    public void setDebuging(boolean debuging) {
        this.debuging = debuging;
    }
}
