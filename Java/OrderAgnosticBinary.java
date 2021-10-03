package com.art;

import java.util.Scanner;

public class OrderAgnosticBinary {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the length of the array: ");
        int n = sc.nextInt();
        int[] arr = new int[n];

        //accepting the array from the user
        System.out.println("Enter the array elements: ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        //accepting the element to be searched
        System.out.print("Enter the element to be searched: ");
        int target = sc.nextInt();

        //calling the function, since it is static no need of object creation
        int location = orderAgnosticBS(arr,target);
        System.out.println("The target is present at location " + location);
    }

    static int orderAgnosticBS(int[] arr, int target) {
        int start = 0, end = arr.length - 1;
        boolean asc = arr[start] < arr[end];

        while (start <= end) {

            //In this way the range of integers will never be crossed
            int mid = start + (end - start) / 2;
            
            if (arr[mid] == target) {
                return mid;
            }
            if (asc) {
                if (target < arr[mid]) {
                    end = mid - 1 ;
                }
                else {
                    start = mid + 1;
                }
            }
            else {
                if (target > arr[mid]) {
                    end = mid - 1 ;
                }
                else {
                    start = mid + 1;
                }
            }
        }
        return -1;
    }
}