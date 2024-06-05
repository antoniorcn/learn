import java.util.HashMap;
import java.util.Map;

import javafx.application.Application;
import javafx.beans.binding.Bindings;
import javafx.scene.Scene;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.Region;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;


class VWeightedBox extends VBox { 

    private Map<Region, Double> weights = new HashMap<>();

    public VWeightedBox() { 
    }
    
    public void weight(Region region, double weight) { 
        weights.put(region, weight);
    }

    private double sumWeights() { 
        double sum = 0.0;
        for(Double value : weights.values()) { 
            sum += value;
        }
        return sum;
    }

    private void recalculateHeights() { 
        double sum = sumWeights();
        for(Region region : weights.keySet()) {
            double w = weights.get(region);
            double weightFactor = (w / sum);
            region.prefHeightProperty().unbind();
            region.prefHeightProperty().bind(Bindings.multiply(this.heightProperty(), weightFactor));
            // System.out.println("Sum: " + sum + "  W: " + w + " weightFactor: " + weightFactor);
        }
    }

    public void add(Region region, double weight) { 
        getChildren().add(region);
        weight(region, weight);
        recalculateHeights();
    }

    public String textHeight( Region region  ) { 
        return " height:  " + region.getHeight() + "\n" + 
        " maxHeight:" +  region.maxHeightProperty().get() + "\n" + 
        " minHeight:" +  region.minHeightProperty().get() + "\n" + 
        " prefHeight:" +  region.prefHeightProperty().get() + "\n" + 
        " boundsInLocal:" +  region.boundsInLocalProperty().get() + "\n" +
        " boundsInParent:" +  region.boundsInParentProperty().get() + "\n" +
        " sceneHeight:" +  region.parentProperty().get() + "\n";
        
    }
}

public class TestePanes extends Application {

    public void start(Stage stage) { 
        VWeightedBox pane = new VWeightedBox();
        pane.setStyle("-fx-background-color: lightyellow; padding: 30;");

        BorderPane border1 = new BorderPane();
        border1.setStyle("-fx-background-color: red;");
        border1.setPrefHeight(300);

        BorderPane border2 = new BorderPane();
        border2.setStyle("-fx-background-color: yellow;");

        pane.add(border1, 30);
        pane.add(border2, 70);

        Scene scene = new Scene(pane, 800, 600);
        stage.setScene(scene);
        stage.show();
    }

    public static void main(String[] args) {
        Application.launch(TestePanes.class, args);
    }
 }