import java.io.*;
import java.util.*;
public class test {
    public static void main(String args[])throws IOException{
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<Integer> show = new ArrayList<Integer>();
        for(int i=0;i<n;i++){
            int x = sc.nextInt();
            show.add(x);
        }
        System.out.println(calculateAmount(show));
    }

    public static int calculateAmount(List<Integer> prices){
        PriorityQueue<Integer> min = new PriorityQueue<Integer>();
        if(prices.size() == 1){
            return prices.get(0);
        }
        else{
            int sum = prices.get(0);
            min.add(prices.get(0));
            for(int i=1;i<prices.size();i++){
                sum += (int)Math.max(prices.get(i) - min.peek(), 0);
                min.add(prices.get(i));
            }
            return sum;
        }
    }
}
