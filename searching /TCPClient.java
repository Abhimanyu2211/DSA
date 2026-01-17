import java.io.*;
import java.net.*;

public class TCPClient {
    public static void main(String[] args) {
        try {
            Socket socket = new Socket("localhost", 5000);

            DataOutputStream dos = new DataOutputStream(socket.getOutputStream());
            DataInputStream dis = new DataInputStream(socket.getInputStream());

            dos.writeUTF("Hello Server");

            String serverReply = dis.readUTF();
            System.out.println("Message from Server: " + serverReply);

            socket.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}

