package com.company;

import java.util.Scanner;

public class Still_Doing_Methods {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("No1 : ");
        int a = sc.nextInt();
        System.out.println("No2 :");
        int b = sc.nextInt();
        int c;
        c = getSum(a, b);
        System.out.println(c);

    }

    public static int getSum(int x, int y) {
        int z = x + y;
        return z;
    }


}