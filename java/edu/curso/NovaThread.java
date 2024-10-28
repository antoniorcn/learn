package edu.curso;


class TrabalhoA implements Runnable { 
    public void run() {
        while(true) {
            System.out.println("Executando Trabalho (A)");
            try {
                Thread.sleep(10);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

class TrabalhoB implements Runnable { 
    public void run() {
        while(true) {
            System.out.println("Executando Trabalho(B)");
            try {
                Thread.sleep(10);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}


public class NovaThread {
    public static void main(String[] args) {
        TrabalhoA tba = new TrabalhoA();
        Thread mta = new Thread( tba );
        mta.start();

        TrabalhoB tbb = new TrabalhoB();
        Thread mtb = new Thread( tbb );
        mtb.start();

        while(true) { 
            System.out.println("Codigo principal");
            try {
                Thread.sleep(10);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }

    }
}
