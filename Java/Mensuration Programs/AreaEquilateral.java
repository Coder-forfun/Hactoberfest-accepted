package com.anubhav;

import java.util.Scanner;

public class AreaEquilateral {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the side of triangle: ");
        double s = in.nextDouble();
        double area = (Math.sqrt(3) / 4) * s * s;
        System.out.println("Area is: " + area);
    }
}
