// 1. You are given a number n, representing the number of rows.
// 2. You are given a number m, representing the number of columns.
// 3. You are given n*m numbers, representing elements of 2d array a.
// 4. You are required to traverse and print the contents of the 2d array in form of a spiral.
  
import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        // write your code here

        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int m = scn.nextInt();

        int[][] arr = new int[n][m];
        for(int i = 0; i < arr.length; i++){
            for(int j = 0; j < arr[i].length; j++){
                arr[i][j] = scn.nextInt();
            }
        }

        int minr = 0;
        int minc = 0;
        int maxr = arr.length - 1;
        int maxc = arr[0].length - 1;
        int total = n * m;
        int count = 1;

        while(count <= total){
            // left wall, downwards [what is constant and what varies]
            for(int i = minr; i <= maxr && count <= total; i++){
                System.out.println(arr[i][minc]);
                count++;
            }
            minc++;

            // bottom wall, rightwards
            for(int j = minc; j <= maxc && count <= total; j++){
                System.out.println(arr[maxr][j]);
                count++;
            }
            maxr--;

            // right wall, upwards
            for(int i = maxr; i >= minr && count <= total; i--){
                System.out.println(arr[i][maxc]);
                count++;
            }
            maxc--;

            // top wall, leftwards
            for(int j = maxc; j >= minc && count <= total; j--){
                System.out.println(arr[minr][j]);
                count++;
            }
            minr++;
        }
    }

}
