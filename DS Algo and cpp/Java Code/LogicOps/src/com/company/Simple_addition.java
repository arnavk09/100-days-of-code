package com.company;

import java.util.Scanner;

public class Simple_addition {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter A Number : ");
        int x = sc.nextInt();
        System.out.println("Enter Another Number : ");
        int y = sc.nextInt();
        int z = x + y;
        System.out.println("The Sum Is : " + z);
    }
}