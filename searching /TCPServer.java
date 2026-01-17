import java.io.*;
import java.net.*;

public class TCPServer{
    public static void main(String[] args) {
        try {
            ServerSocket serverSocket = new ServerSocket(5000);
            System.out.println("Server started. Waiting for client...");c-
            Socket socket = serverSocket.accept();
            System.out.println("Client connected.");

            DataInputStream dis = new DataInputStream(socket.getInputStream());
            DataOutputStream dos = new DataOutputStream(socket.getOutputStream());

            String clientMsg = dis.readUTF();
            System.out.println("Message from Client: " + clientMsg);

            dos.writeUTF("Hello Client, message received successfully.");

            socket.close();
            serverSocket.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
