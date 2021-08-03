package com.company;

import java.util.Scanner;

public class Strings_And_Names {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Temperature in ºF : ");
        double f = sc.nextDouble();
        double c = ((5 * (f - 32.0)) / 9.0);
        System.out.println("Temp in ºC is : " + c);
        System.exit(0);

    }
}