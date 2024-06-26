module edu.curso.teste1 {
    requires javafx.controls;
    requires javafx.fxml;


    opens edu.curso.teste1 to javafx.fxml;
    exports edu.curso.teste1;
}