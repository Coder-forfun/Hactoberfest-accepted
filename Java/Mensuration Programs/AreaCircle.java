package com.anubhav;

import java.util.Scanner;

public class AreaCircle {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the radius of circle: ");
        int radius = in.nextInt();
        double area = 3.141592653589793D * (double) radius * (double) radius;
        System.out.println("Area of the circle is: " + area);
    }
}
