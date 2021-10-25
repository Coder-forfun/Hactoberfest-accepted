package com.anubhav;

import java.util.Scanner;

public class VolumeCylinder {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the radius and height of cylinder: ");
        double r = in.nextDouble();
        double h = in.nextDouble();
        double volume = (Math.PI * r * r * h);
        System.out.println("Volume is: " + volume);
    }
}