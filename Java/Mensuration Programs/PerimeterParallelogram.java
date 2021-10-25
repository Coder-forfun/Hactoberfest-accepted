package com.anubhav;

import java.util.Scanner;

public class PerimeterParallelogram {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the sides of parallelogram: ");
        double l = in.nextDouble();
        double b = in.nextDouble();
        double perimeter = 2 * (l + b);
        System.out.println("Perimeter is: " + perimeter);
    }
}
