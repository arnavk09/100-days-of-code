package com.company;

import java.util.Scanner;

public class MethodConcep_Clarifier {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Runs");
        double a = sc.nextDouble();
        System.out.println("Enter Overs");
        double b = sc.nextDouble();
        double x;
        x = RunRateCalculate(a, b);
        System.out.println("The Run Rate is :" + x);


    }
      //METHOD
    public static double RunRateCalculate(double runs, double overs) {
        double runrate = runs / overs;
        return runrate;
    }
}
