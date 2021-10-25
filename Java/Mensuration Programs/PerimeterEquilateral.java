package com.anubhav;

import java.util.Scanner;

public class PerimeterEquilateral {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the side of equilateral triangle: ");
        double side = in.nextDouble();
        double perimeter = 3 * side;
        System.out.println("Perimeter is: " + perimeter);
    }
}
