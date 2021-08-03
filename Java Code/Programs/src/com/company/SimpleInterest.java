package com.company;

import java.util.Scanner;

public class SimpleInterest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter PRINCIPAL : ");
        double a = sc.nextDouble();
        System.out.println("Enter RATE : ");
        double b = sc.nextDouble();
        System.out.println("Enter TIME (in YEARS) : ");
        double c = sc.nextDouble();
        double d = (a * b * c) / 100;
        System.out.println("SIMPLE INTEREST IS : " + d);
        System.out.println("Thank You for using this program.");
        System.exit(0);
    }
}




