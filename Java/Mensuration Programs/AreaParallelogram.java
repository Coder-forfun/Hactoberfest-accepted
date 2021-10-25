package com.anubhav;

import java.util.Scanner;

public class AreaParallelogram {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter base and height of parallelogram: ");
        int b = in.nextInt();
        int h = in.nextInt();
        int area = b*h;
        System.out.println("Area is: " + area);
    }
}
