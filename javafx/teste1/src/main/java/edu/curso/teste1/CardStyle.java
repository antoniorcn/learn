package edu.curso.teste1;

import javafx.scene.paint.Color;

public class CardStyle {
    private Color fundoCor = Color.web("#F8EEC6", 1.0);
    private Color bordaCor = Color.web("#9F7053", 1.0);
    private double bordaExpessura = 10.0;
    private double bordaRaio = 30.0;

    public Color getFundoCor() {
        return fundoCor;
    }
    public void setFundoCor(Color fundoCor) {
        this.fundoCor = fundoCor;
    }

    public Color getBordaCor() {
        return bordaCor;
    }
    public void setBordaCor(Color bordaCor) {
        this.bordaCor = bordaCor;
    }

    public double getBordaExpessura() {
        return bordaExpessura;
    }
    public void setBordaExpessura(double bordaExpessura) {
        this.bordaExpessura = bordaExpessura;
    }

    public double getBordaRaio() {
        return bordaRaio;
    }
    public void setBordaRaio(double bordaRaio) {
        this.bordaRaio = bordaRaio;
    }
}
