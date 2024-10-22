package edu.curso;

import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.ServerSocket;
import java.net.Socket;

class ServidorSocket {


    public static void servidor() { 
        try { 
            System.out.println("Servidor iniciado...");
            ServerSocket server = new ServerSocket(21755);
            System.out.println("Porta esta reservada para este servidor");
            System.out.println("Aguardando conexao do cliente....");
            Socket client = server.accept();
            OutputStream out = client.getOutputStream();
            out.write("Ola bem vindo ao servidor\n".getBytes());
            out.write("Tudo o que voce digitar estarei vendo aqui na console\n".getBytes());
            out.flush();
            System.out.println("Cliente está conectado");
            InputStream in = client.getInputStream();
            int i = 0;
            while ((i = in.read()) != 27) { 
                System.out.print((char)i);
            }
            System.out.println("Servidor encerrado");
            server.close();
        } catch(IOException e) { 
            e.printStackTrace();
        }
    }

    public static void main(String[] args) {
        servidor();
    }
    
}