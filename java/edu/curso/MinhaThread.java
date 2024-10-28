package edu.curso;

public class MinhaThread extends Thread { 
    public void run() { 
        while (true) { 
            System.out.println("Executando Minha Thread");
            try { 
                Thread.sleep(100);
            } catch(InterruptedException e) { 
                e.printStackTrace();
            }
        }
    }
    public static void main(String[] args) {
        
        MinhaThread mta = new MinhaThread();
        mta.start();
    }

}