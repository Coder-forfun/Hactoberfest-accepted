package com.anubhav;

import java.util.Scanner;

public class AreasTriangle {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the sides of triangle: ");
        double a, b, c;
        a = in.nextDouble();
        b = in.nextDouble();
        c = in.nextDouble();
        double s = (a + b + c) / 2;
        double area = Math.sqrt(s * (s - a) * (s - b) * (s - c));
        System.out.println("Area of triangle is: " + area);
    }
}
