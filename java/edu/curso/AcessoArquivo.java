package edu.curso;

import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class AcessoArquivo {
   
    public static void gravacao() {
        try { 
            FileWriter fw = new FileWriter("C:/temp/nome.txt");
            fw.write("ABC\n");
            fw.write("ABC\n");
            fw.flush();
            fw.write("ABC\n");
            fw.write("ABC\n");
            fw.write("ABC\n");

        } catch (IOException e) { 
            e.printStackTrace();
        }
    }

    public static void leitura() { 
        try { 
            FileReader fr = new FileReader("C:\\temp\\nome.txt");
            int i = 0;
            do {
                i = fr.read();
                if (i != -1) {
                    System.out.print((char)i);
                }
            } while(i != -1);
        } catch (IOException e) { 
            e.printStackTrace();
        }

    }

    public static void main(String[] args) {
        // gravacao();
        leitura();
    }
}
