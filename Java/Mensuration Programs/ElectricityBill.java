package com.anubhav;

import java.util.Scanner;

public class ElectricityBill {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the power and number of hours of electricity used: ");
        double power = in.nextDouble();
        int hours = in.nextInt();
        int cost = 9;
        double bill = power*hours*cost/ 1_000;
        System.out.println("Electricity bill is: " + bill);
    }
}
