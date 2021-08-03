package com.company;

import java.util.Scanner;

public class MethodForMBtoKB {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Data size in MB : ");
        double mb = sc.nextDouble();
        if (mb < 0) {
            System.out.println("ERROR! size cannot be negative!");
        } else {
            double kb = convertMbtoKb(mb);
            System.out.println("Data Size in KB is : " + kb + "KB");
        }
    }

    public static double convertMbtoKb(double megabyte) {
        double kilobyte = megabyte * 1024;
        return kilobyte;
    }

}
