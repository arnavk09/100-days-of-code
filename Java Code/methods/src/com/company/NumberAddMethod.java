package com.company;

import java.util.Scanner;

public class NumberAddMethod {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number : ");
        int l = sc.nextInt();
        System.out.println("Enter another number : ");
        int m = sc.nextInt();

        int p = Adder(l, m);
        System.out.println(p);
        System.exit(0);

    }

    public static int Adder(int x, int y) {
        return x + y;
    }

    public static int Adder(int x, int y, int z) {
        return x + y + z;
    }

    public static int Adder(int x, int y, int z, int a) {
        return x + y + z + a;
    }
}
