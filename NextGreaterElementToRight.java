
import java.io.*;
import java.util.*;

public class Main{
    public static void display(int[] nge)
    {
        StringBuilder sb = new StringBuilder();
        
        for(int val: nge)
        {
            sb.append(val + "\n");
        }
        System.out.println(sb);

    }
    public static void main(String[] args) throws Exception 
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int[] arr = new int[n];
        
        for(int i = 0; i<arr.length; i++)
        {
            arr[i] = Integer.parseInt(br.readLine());
        }
        
        int[] nge = solve(arr);
        

        display(nge);
    }
    
    public static int[] solve(int[] arr)
    {
        int[] nge = new int[arr.length];
        Stack<Integer> st = new Stack<>();
        
        st.push(arr[arr.length-1]);
        nge[arr.length-1] = -1;
        
        for(int i = arr.length-2; i>=0; i--)
        {
            while(st.size() > 0 && arr[i] > st.peek())
            {
                st.pop();
            }
            
            if(st.size() == 0)
            {
                nge[i] = -1;
            }else if(st.peek() > arr[i])
            {
                nge[i] = st.peek();
            }
            
            st.push(arr[i]);
        }
        return nge;
        
    }
}
