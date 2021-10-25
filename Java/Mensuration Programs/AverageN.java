package com.anubhav;

import java.util.Scanner;

public class AverageN {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the value of N: ");
        int N = in.nextInt();
        int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += in.nextInt();
        }
        System.out.println("Average is: " + sum/N);
    }
}
