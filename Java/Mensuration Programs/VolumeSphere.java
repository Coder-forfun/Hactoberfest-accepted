package com.anubhav;

import java.util.Scanner;

public class VolumeSphere {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the radius of sphere: ");
        double r = in.nextDouble();
        double volume = Math.PI * r * r * r;
        System.out.println("Volume is: " + volume);
    }
}