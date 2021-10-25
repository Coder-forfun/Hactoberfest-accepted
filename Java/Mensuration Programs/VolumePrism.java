package com.anubhav;

import java.util.Scanner;

public class VolumePrism {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the base area and length of prism: ");
        double area = in.nextDouble();
        double l = in.nextDouble();
        double volume = area * l;
        System.out.println("Volume is: " + volume);
    }
}
