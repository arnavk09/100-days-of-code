package com.company;

public class Operator_Challenge {

    public static void main(String[] args) {
        double x = 20.00;
        double y = 80.00;
        double z = ((x + y) * 100);
        System.out.println("The Value, according to operator precedence is :" + z);
        double a = z % 40.00;
        System.out.println("The REMAINDER of the operation is : " + a);
        if (a == 0) {
            System.out.println("TRUE");
        } else {
            System.out.println("FALSE");
        }

    }
}