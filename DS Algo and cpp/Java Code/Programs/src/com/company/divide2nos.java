package com.company;

import java.util.Scanner;

public class divide2nos {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your dividend : ");
        double dividend = sc.nextDouble();

        System.out.println("Enter your divisor : ");
        double divisor = sc.nextDouble();

        double quotient = dividend / divisor;
        System.out.println("Your Answer Is : " + quotient);
        System.out.println("Thank You For Using This Program");
        System.exit(0);

    }


}
