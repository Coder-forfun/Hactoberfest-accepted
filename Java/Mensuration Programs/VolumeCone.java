package com.anubhav;

import java.util.Scanner;

public class VolumeCone {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the radius and height of cone: ");
        double r = in.nextDouble();
        double h = in.nextDouble();
        double volume = (Math.PI * r * r * h) / 3;
        System.out.println("Volume is: " + volume);
    }
}
