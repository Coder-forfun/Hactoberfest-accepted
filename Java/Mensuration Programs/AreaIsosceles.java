package com.anubhav;

import java.util.Scanner;

public class AreaIsosceles {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter base and height of the triangle");
        double b = in.nextDouble();
        double h = in.nextDouble();
        double area = (b * h) / 2;
        System.out.println("Area is: " + area);
    }
}
