package com.company;

import java.util.Scanner;

public class KMPHtoMPS {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Speed In Kilometers Per Hour : ");
        double a = sc.nextInt();
        double b = (double) a / 3.6;
        System.out.println("Your Speed in Meters Per Second IS : " + b);
        System.out.println("Thank You for using this program.");
        System.exit(0);


    }
}
