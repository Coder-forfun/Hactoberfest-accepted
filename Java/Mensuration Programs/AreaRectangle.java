package com.anubhav;

import java.util.Scanner;

public class AreaRectangle {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter length and breadth of rectangle: ");
        int l = in.nextInt();
        int b = in.nextInt();
        int area = l * b;
        System.out.println("Area of rectangle is: " + area);
    }
}
