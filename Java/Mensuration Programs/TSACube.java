package com.anubhav;

import java.util.Scanner;

public class TSACube {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the side of cube: ");
        double side = in.nextDouble();
        double area = 6 * side * side;
        System.out.println("Total surface area is: " + area);
    }
}