package com.company;

import java.util.Scanner;

public class RunRateCalculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Runs Scored : ");
        int runs = sc.nextInt();

        System.out.println("Enter Overs Faced : ");
        int overs = sc.nextInt();

        double run_rate = runs / overs;
        System.out.println("The Run Rate is :" + run_rate);
        if (run_rate >= 9) {
            System.out.println("Wow!");
        } else {
            System.out.println("Could be better!");
        }

        System.exit(0);

    }
}