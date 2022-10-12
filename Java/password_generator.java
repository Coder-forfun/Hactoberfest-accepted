
import java.math.BigInteger;
import java.nio.charset.StandardCharsets;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;

public class password_encryption
{
    public static byte[] getSHA(String input) throws NoSuchAlgorithmException
    {
        
        MessageDigest md = MessageDigest.getInstance("SHA-512");

        
        return md.digest(input.getBytes(StandardCharsets.UTF_8));
    }

    public static String toHexString(byte[] hash)
    {
        
        BigInteger number = new BigInteger(1, hash);

        
        StringBuilder hexString = new StringBuilder(number.toString(16));

        while (hexString.length() < 32)
        {
            hexString.insert(0, '0');
        }

        return hexString.toString();
    }

   
    public static void main(String args[])
    {
        try
        {
            String string1 = "examplePassword123";
            System.out.println("\n" + string1 + " : " + toHexString(getSHA(string1)));

            String string2 = "hashtrial";
            System.out.println("\n" + string2 + " : " + toHexString(getSHA(string2)));
        }
        catch (NoSuchAlgorithmException e)
        {
            System.out.println("Exception thrown for incorrect algorithm: " + e);
        }
    }
}

