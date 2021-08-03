package com.company;

import java.util.Scanner;

public class Additionof3nos {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Number 1 : ");
        int a = sc.nextInt();
        System.out.println("Enter Number 2 : ");
        int b = sc.nextInt();
        System.out.println("Enter Number 3 : ");
        int c = sc.nextInt();
        int x = a + b + c;
        System.out.println("The Sum Of The 3 Digits IS : " + x);
        System.exit(0);
    }
}
