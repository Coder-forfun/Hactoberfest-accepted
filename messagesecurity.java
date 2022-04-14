import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Encrypt {
    String Encode(String s){
        s=s.trim();
        int len=s.length();
        int i=0;

        String encoded="";
        int how=(int)(Math.random()*3)+1;
        int code[]=new int[how];
        for(int j=0;j<how;j++)
            code[j]=(int)(Math.random()*(125-33))+33;
        outer:while(true){
            for(int j=0;j<code.length;j++){
                char temp=s.charAt(i);
                int ad=(int)temp;
                int diff=code[j];

                while(diff>0){
                    if(ad ==126)
                        ad=32;
                    ad++;
                    diff--;
                }
                encoded+=(char)ad;
                i++;
                if(i==len)
                    break outer;
            }
        }
        encoded+='$';
        for(int j:code){
            encoded=encoded+""+Integer.toString(j)+"~";
        }
        return(encoded.substring(0,encoded.length()-1));


    }
    String Decode(String s){
        String dcoded ="";
        int i=0;
        s=s.trim();
        String st=s.substring(s.lastIndexOf('$')+1);
        s=s.substring(0,s.lastIndexOf('$'));
        int len=s.length();
        String[] pass=st.split("~");
        int code[]=new int[pass.length];
        for(int j=0;j< pass.length;j++)
            code[j]=Integer.parseInt(pass[j]);
        outer:while(true){
            for(int j=0;j<code.length;j++){
                char temp=s.charAt(i);
                int subt=(int)temp;
                int diff=code[j];
                while(diff>0){
                    if(subt==32)
                        subt=126;
                    subt--;
                    diff--;
                }
                dcoded=dcoded+((char) subt);
                i++;
                if(i==len)
                    break outer;
            }
        }
        return dcoded;

    }
    public static void main(String[] args) throws IOException{
        Encrypt ob=new Encrypt();
        BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
        while (true){
            System.out.println("Enter 1 do Encrypt a message: \nEnter 2 to Decrypt a message:\nEnter 0to exit:-");
            System.out.println("Enter your choice:-");
            int ch=Integer.parseInt(in.readLine());
            if(ch==1){
                System.out.println("Type or paste the message: ");
                String m= in.readLine();
                System.out.println("\n"+ob.Encode(m)+ "\n");
            }
            else if(ch==2){
                System.out.println("Type or paste the Encrypted message: ");
                String m= in.readLine();
                System.out.println("\n" + ob.Decode(m)+ "\n");
            }
            else if(ch==0)
                System.exit(0);
            else
                System.out.println("wrong Input. Please re-enter");
        }
    }
}
