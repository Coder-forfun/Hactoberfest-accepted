package com.anubhav;

import java.util.Scanner;

public class PerimeterCircle {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the radius: ");
        double r = in.nextDouble();
        double perimeter = 2 * Math.PI * r;
        System.out.println("Perimeter is: " + perimeter);
    }
}