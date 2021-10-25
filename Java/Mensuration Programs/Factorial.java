package com.anubhav;

import java.util.Scanner;

public class Factorial {
    public static void main(String[] args) {
        // write your code here
        System.out.print("Enter a number: ");
        Scanner in = new Scanner(System.in);
        int num = in.nextInt();
        int factorial = 1;
        if(num != 0){
            while(num > 0){
                factorial *= num;
                num -= 1;
            }
        }
        System.out.println("Factorial is : " + factorial);
    }
}
