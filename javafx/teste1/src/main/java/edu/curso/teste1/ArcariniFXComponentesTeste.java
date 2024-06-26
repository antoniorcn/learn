package edu.curso.teste1;

import javafx.application.Application;
import javafx.beans.binding.Bindings;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Label;
import javafx.scene.control.OverrunStyle;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.*;
import javafx.scene.paint.Color;
import javafx.stage.Stage;

public class ArcariniFXComponentesTeste extends Application {
    @Override
    public void start(Stage stage) {
        Image image1 = new Image("File:D:/git/learn/javafx/teste1/src/main/resources/image/cesta.png", 100.0, 100.0, true, true);
        Image image2 = new Image("File:D:/git/learn/javafx/teste1/src/main/resources/image/hamburguer.png", 100.0, 100.0, true, true);

        ImageView imgCesta = new ImageView(image1);
        ImageView imgHamburguer = new ImageView(image2);

        Border bordaAzul = new Border(new BorderStroke(Color.BLUE,
                BorderStrokeStyle.SOLID, new CornerRadii(20), BorderWidths.DEFAULT));

        Border bordaVermelha = new Border(new BorderStroke(Color.RED,
                BorderStrokeStyle.SOLID, new CornerRadii(20), BorderWidths.DEFAULT));

        ColumnConstraints col1 = new ColumnConstraints();
        col1.setPercentWidth(50);
        ColumnConstraints col2 = new ColumnConstraints();
        col2.setPercentWidth(50);

        RowConstraints row1 = new RowConstraints();
        row1.setPercentHeight(50);
        RowConstraints row2 = new RowConstraints();
        row2.setPercentHeight(50);

        GridPane pane = new GridPane();
        pane.setBorder(bordaAzul);
        pane.setGridLinesVisible(true);
        pane.getColumnConstraints().addAll(col1, col1);
        pane.getRowConstraints().addAll(row1, row1);


        // Painel de Teste
        StackPane outroPane = new StackPane();
        outroPane.setBorder(bordaVermelha);
        Label lblTeste = new Label("Teste com texto maior");
        lblTeste.setBorder(bordaAzul);
        outroPane.getChildren().add(lblTeste);
        pane.add(outroPane, 1, 1);
        outroPane.getChildren().add(imgCesta);
        GridPane.setMargin(outroPane, new Insets(20));
        GridPane.setFillWidth(outroPane, true);
        StackPane.setAlignment(lblTeste, Pos.BOTTOM_RIGHT);
        StackPane.setAlignment(imgCesta, Pos.CENTER);
        StackPane.setMargin(lblTeste, new Insets(10));
        lblTeste.setTextOverrun(OverrunStyle.CENTER_ELLIPSIS);
        lblTeste.prefWidthProperty().bind(Bindings.multiply(outroPane.widthProperty(), 0.9));

        // Card
        Card card = new Card();
        pane.add(card, 0, 0);
        card.setPadding(new Insets(10));

        // Populando o Card
        StackPane cardContent = new StackPane();
        HBox.setHgrow(imgHamburguer, Priority.ALWAYS);
        imgHamburguer.setPreserveRatio(true);

        // StackPane box = new StackPane();
        GridPane box = new GridPane();
        LabelTitulo titulo = new LabelTitulo("Hamburguer");
        titulo.setBorder(bordaVermelha);
        LabelTexto texto = new LabelTexto("Hambúrguer suculento com queijo cheddar derretido, alface, tomate, \n" +
                "picles e molho especial no pão brioche.");
        LabelPreco preco = new LabelPreco("apenas ", " R$ ", "18,90", "");
        box.addColumn(0, titulo, texto, preco);
        RowConstraints tituloRow = new RowConstraints();
        tituloRow.setPercentHeight(20);
        RowConstraints textoRow = new RowConstraints();
        textoRow.setPercentHeight(60);
        RowConstraints precoRow = new RowConstraints();
        precoRow.setPercentHeight(20);
        box.getRowConstraints().addAll(tituloRow, textoRow, precoRow);
        box.prefWidthProperty().bind(Bindings.multiply(card.widthProperty(), 0.60));
        box.setBorder(bordaVermelha);
        // preco.setBorder(bordaAzul);
        box.setMaxSize(StackPane.USE_PREF_SIZE, StackPane.USE_COMPUTED_SIZE);

        StackPane.setAlignment(titulo, Pos.TOP_LEFT);
        StackPane.setAlignment(texto, Pos.CENTER_LEFT);
        StackPane.setAlignment(preco, Pos.BOTTOM_LEFT);
        StackPane.setMargin(titulo, new Insets(20, 30, 0, 10));
        StackPane.setMargin(texto, new Insets(0, 30, 0, 10));
        StackPane.setMargin(preco, new Insets(0, 30, 20, 10));


        cardContent.getChildren().addAll(box, imgHamburguer);
        StackPane.setMargin(imgHamburguer, new Insets(0, 10, 0, 30));
        StackPane.setAlignment(box, Pos.CENTER_LEFT);
        StackPane.setAlignment(imgHamburguer, Pos.CENTER_RIGHT);
        imgHamburguer.fitWidthProperty().bind(Bindings.multiply(cardContent.widthProperty(), 0.3));

        card.getChildren().addAll(cardContent);

        Scene scene = new Scene(pane, 640, 480);

        stage.setTitle("Test Card");
        stage.setScene(scene);
        stage.show();
    }

    public static void main(String[] args) {
        Application.launch(ArcariniFXComponentesTeste.class, args);
    }
}