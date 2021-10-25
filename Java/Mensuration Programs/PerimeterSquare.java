package com.anubhav;

import java.util.Scanner;

public class PerimeterSquare {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the side of square: ");
        double side = in.nextDouble();
        double perimeter = 4 * side;
        System.out.println("Perimeter is: " + perimeter);
    }
}
