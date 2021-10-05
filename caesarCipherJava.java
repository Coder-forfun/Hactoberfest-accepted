import java.util.Scanner;

/**
 * Program to encrypt and decrypt using a Caesar Cipher and the
 * ASCII support.
 *
 * @author Lucas Souza - pt-BR
 * @version 1.0
 */
public class App {
    // Method to encrypt the text.
    public static String encriptar(int chave, String texto) {

        StringBuilder textoCifrado = new StringBuilder();
        int tamanhoTexto = texto.length();

        for (int c = 0; c < tamanhoTexto; c++) {
            int letraCifradaASCII = ((int) texto.charAt(c)) + chave;

            while (letraCifradaASCII > 126)
                letraCifradaASCII -= 94;

            textoCifrado.append((char) letraCifradaASCII);
        }

        return textoCifrado.toString();
    }

    // Method to decrypt the text.
    public static String decriptar(int chave, String textoCifrado) {
        StringBuilder texto = new StringBuilder();
        int tamanhoTexto = textoCifrado.length();

        for (int c = 0; c < tamanhoTexto; c++) {
            int letraDecifradaASCII = ((int) textoCifrado.charAt(c)) - chave;

            while (letraDecifradaASCII < 32)
                letraDecifradaASCII += 94;

            texto.append((char) letraDecifradaASCII);
        }

        return texto.toString();
    }

    public static void main(String[] args) {

        try {
            Scanner entrada = new Scanner(System.in);

            System.out.println("\n**************CAESAR'S CIPHER********************\n");
            System.out.println("\n*****YOUR KEEPING SECRETS AND NEVER DISCLOSED*****\n");

            System.out.print("Enter the text to be encrypted: ");
            String texto = entrada.nextLine();
            System.out.print("Enter the shift key (1 - 126): ");
            int chave = entrada.nextInt();

            // Encrypting
            String textoCriptografado = encriptar(chave, texto);
            // Decrypting
            String textoDescriptografado = decriptar(chave, textoCriptografado);

            System.out.println("\n\nTEXT INSERTED ENCRYPTED: " + textoCriptografado);
            System.out.println("TEXT INSERTED DESCRIPTED: " + textoDescriptografado);

            System.out.println("\n*****************************************************\n");

        } catch (RuntimeException e) { // Trata erro de digitacao
            System.out.println("The offset key was entered incorrectly.");
            System.out.println("Execute o programa novamente e entre com uma chave valida.");
        }

    }
}