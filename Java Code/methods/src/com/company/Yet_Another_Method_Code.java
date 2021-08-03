package com.company;

import java.util.Scanner;

public class Yet_Another_Method_Code {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Number between 1 and 7, both inclusive : ");
        int x = sc.nextInt();
        String y;
        if (x >= 1 && x <= 7) {
            y = DayOfWeek(x);
            System.out.println("The Day IS : " + y);
        } else {
            System.out.println("ERROR!");
        }
    }

    public static String DayOfWeek(int x) {
        if (x == 1) {
            return "Sunday";
        } else if (x == 2) {
            return "Monday";

        } else if (x == 3) {
            return "Tuesday";
        } else if (x == 4) {
            return "Wednesday";
        } else if (x == 5) {
            return "Thursday";
        } else if (x == 6) {
            return "Friday";
        } else if (x == 7) {
            return "Saturday";
        } else {
            System.out.println("ERROR : ENTER A NUMBER BETWEEN 1 and 7, BOTH INCLUSIVE!");
        }
        return " ";
    }
}
//declaring a method was actually useless in this case
//in c/c++ the method is called "FUNCTION"