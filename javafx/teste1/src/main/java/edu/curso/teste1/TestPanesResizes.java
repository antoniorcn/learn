package edu.curso.teste1;

import javafx.application.Application;
import javafx.geometry.Insets;
import javafx.scene.Scene;
import javafx.scene.control.Label;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.*;
import javafx.scene.paint.Color;
import javafx.stage.Stage;

public class TestPanesResizes extends Application {

    public void start(Stage stage) {

        GridPane panePrincipal = new GridPane();
//        TilePane panePrincipal = new TilePane();
        panePrincipal.setPadding(new Insets(20));

        Border bordaAzul = new Border(new BorderStroke(Color.BLUE,
                BorderStrokeStyle.SOLID, new CornerRadii(20), BorderWidths.DEFAULT));

        Border bordaVermelha = new Border(new BorderStroke(Color.RED,
                BorderStrokeStyle.SOLID, new CornerRadii(20), BorderWidths.DEFAULT));

        Border bordaVerde = new Border(new BorderStroke(Color.GREEN,
                BorderStrokeStyle.SOLID, new CornerRadii(20), BorderWidths.DEFAULT));

        Border bordaMarrom = new Border(new BorderStroke(Color.BROWN,
                BorderStrokeStyle.SOLID, new CornerRadii(20), BorderWidths.DEFAULT));

        Border bordaPreta = new Border(new BorderStroke(Color.BLACK,
                BorderStrokeStyle.SOLID, new CornerRadii(20), BorderWidths.DEFAULT));

        FlowPane paneFlow = new FlowPane();
        paneFlow.setBorder(bordaVermelha);
        paneFlow.getChildren().add(new Label("Pane Flow"));

        Pane pane = new Pane();
        pane.setBorder(bordaAzul);
        pane.getChildren().add(new Label("Pane"));

        GridPane gridPane = new GridPane();
        gridPane.setBorder(bordaVerde);
        gridPane.getChildren().add(new Label("GridPane"));

        VBox vboxPane = new VBox();
        vboxPane.setBorder(bordaMarrom);
        vboxPane.getChildren().add(new Label("VBox Pane"));

        HBox hboxPane = new HBox();
        hboxPane.setBorder(bordaAzul);
        hboxPane.getChildren().add(new Label("HBox Pane"));

        TilePane tilePane = new TilePane();
        tilePane.setBorder(bordaVerde);
        tilePane.getChildren().add(new Label("TilePane"));

        AnchorPane anchorPane = new AnchorPane();
        anchorPane.setBorder(bordaMarrom);
        anchorPane.getChildren().add(new Label("AnchorPane"));

        BorderPane borderPane = new BorderPane();
        borderPane.setBorder(bordaPreta);
        borderPane.setTop(new Label("BorderPane"));


        StackPane.setMargin(paneFlow, new Insets(10));
        StackPane.setMargin(pane, new Insets(20));
        StackPane.setMargin(gridPane, new Insets(30));
        StackPane.setMargin(vboxPane, new Insets(40));
        StackPane.setMargin(hboxPane, new Insets(50));
        StackPane.setMargin(tilePane, new Insets(60));
        StackPane.setMargin(anchorPane, new Insets(70));
        StackPane.setMargin(borderPane, new Insets(80));

//        pane.setPrefSize(Pane.USE_PREF_SIZE, Pane.USE_PREF_SIZE);
//        gridPane.setPrefSize(Pane.USE_PREF_SIZE, Pane.USE_PREF_SIZE);
//        vboxPane.setPrefSize(Pane.USE_PREF_SIZE, Pane.USE_PREF_SIZE);
//        hboxPane.setPrefSize(Pane.USE_PREF_SIZE, Pane.USE_PREF_SIZE);
//        tilePane.setPrefSize(Pane.USE_PREF_SIZE, Pane.USE_PREF_SIZE);
//        anchorPane.setPrefSize(Pane.USE_PREF_SIZE, Pane.USE_PREF_SIZE);
//        borderPane.setPrefSize(Pane.USE_PREF_SIZE, Pane.USE_PREF_SIZE);

//        pane.setMaxSize(Double.MAX_VALUE, Double.MAX_VALUE);
//        gridPane.setMaxSize(Double.MAX_VALUE, Double.MAX_VALUE);
//        vboxPane.setMaxSize(Double.MAX_VALUE, Double.MAX_VALUE);
//        hboxPane.setMaxSize(Double.MAX_VALUE, Double.MAX_VALUE);
//        tilePane.setMaxSize(Double.MAX_VALUE, Double.MAX_VALUE);
//        anchorPane.setMaxSize(Double.MAX_VALUE, Double.MAX_VALUE);
//        borderPane.setMaxSize(Double.MAX_VALUE, Double.MAX_VALUE);

//        tilePane.setMaxHeight(TilePane.USE_COMPUTED_SIZE);
//        tilePane.setPrefHeight(TilePane.USE_COMPUTED_SIZE);
        // tilePane.setMaxHeight(Double.MAX_VALUE);
        // tilePane.setPrefTileHeight(TilePane.USE_COMPUTED_SIZE);

        RowConstraints rowHeight = new RowConstraints();
        rowHeight.setPercentHeight(1.0/8.0*100.0);

        panePrincipal.getRowConstraints().addAll(rowHeight, rowHeight, rowHeight, rowHeight, rowHeight, rowHeight, rowHeight, rowHeight);

         panePrincipal.addColumn(0, paneFlow, pane, gridPane, vboxPane, hboxPane, tilePane, anchorPane, borderPane);

//        panePrincipal.getChildren().addAll(paneFlow, pane, gridPane, vboxPane, hboxPane, tilePane, anchorPane, borderPane);

        panePrincipal.setBorder(bordaAzul);
        Scene scene = new Scene(panePrincipal, 640, 480);

        stage.setTitle("Test Card");
        stage.setScene(scene);
        stage.show();
    }

    public static void main(String[] args) {
        Application.launch(TestPanesResizes.class, args);
    }
}
