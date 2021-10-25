package com.anubhav;

import java.util.Scanner;

public class VolumePyramid {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the base length, base width and height of pyramid: ");
        double l = in.nextDouble();
        double w = in.nextDouble();
        double h = in.nextDouble();
        double volume = (l * w * h) / 3;
        System.out.println("Volume is: " + volume);
    }
}
