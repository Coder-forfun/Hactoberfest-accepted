package com.anubhav;

import java.util.Scanner;

public class CSACylinder {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the radius and height of cylinder: ");
        double r = in.nextDouble();
        double h = in.nextDouble();
        double area = (2 * Math.PI * r) * (h + r);
        System.out.println("Curved surface area is: " + area);
    }
}
