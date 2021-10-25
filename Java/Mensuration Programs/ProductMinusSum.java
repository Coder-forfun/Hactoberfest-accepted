package com.anubhav;

import java.util.Scanner;

public class ProductMinusSum {
    public static void main(String[] args) {
        int product = 1, sum = 0, temp, n;
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the number: ");
        n = in.nextInt();
        while (n != 0) {
            temp = n % 10;
            product *= temp;
            sum += temp;
            n /= 10;
        }
        System.out.println(product - sum);
    }
}
