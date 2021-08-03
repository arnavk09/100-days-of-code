package com.company;

import java.util.Scanner;

public class Overloading_Demo {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Feet : ");
        double a = sc.nextDouble();
        System.out.println("Enter Inches : ");
        double b = sc.nextDouble();
        double x = calcFeetAndInchesToCentimeters(a, b);
        double m = calcFeetAndInchesToCentimeters(100);
        System.out.println(m);
    }

    public static double calcFeetAndInchesToCentimeters(double feet, double inches) {
        if ((feet < 0) || ((inches < 0) || (inches > 12))) {
            System.out.println("INVALID INPUT");
            return -1;

        } else {
            double centimeters = (feet * 12) * 2.54;
            centimeters += inches * 2.54;
            System.out.println(feet + " feet," + inches + " inches = " + centimeters + " cm ");
            return centimeters;

        }
    }

    public static double calcFeetAndInchesToCentimeters(double inches) {
        if (inches <= 0) {
            return -1;
        } else {
            double feet = (int) inches / 12;
            double remainingInches = (int) inches % 12;
            System.out.println(inches + " Inches is equal to " + feet + " feet and " + remainingInches + " inches");
            return calcFeetAndInchesToCentimeters(feet);

        }

    }
}