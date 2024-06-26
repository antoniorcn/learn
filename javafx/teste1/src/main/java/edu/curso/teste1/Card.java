package edu.curso.teste1;

import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.geometry.Insets;
import javafx.scene.control.Label;
import javafx.scene.layout.*;
import javafx.scene.paint.Color;
import javafx.scene.paint.Paint;

import java.net.URL;
import java.util.ResourceBundle;

public class Card extends StackPane implements Initializable {

    private CardStyle cardStyle;

    public Card() {
        this(new CardStyle());
    }

    public Card(CardStyle cardStyle) {
        this.cardStyle = cardStyle;
        generateComponent();
    }

    @Override
    public void initialize(URL location, ResourceBundle resources) {
        System.out.println(getClass().getName() + " initialize executado");
        generateComponent();
    }

    public void generateComponent() {
        System.out.println(getClass().getName() + " generateComponent executado");
        Background cardBackground = new Background(
                new BackgroundFill(cardStyle.getFundoCor(), new CornerRadii(cardStyle.getBordaRaio()), Insets.EMPTY)
        );
        Border cardBorder = new Border(new BorderStroke(cardStyle.getBordaCor(),
                BorderStrokeStyle.SOLID, new CornerRadii(cardStyle.getBordaRaio()), new BorderWidths(cardStyle.getBordaExpessura())));
        this.setBackground( cardBackground );
        this.setBorder(cardBorder);
        this.setMaxSize(StackPane.USE_COMPUTED_SIZE, StackPane.USE_COMPUTED_SIZE);
    }
}