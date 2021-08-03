package com.company;

import java.util.Scanner;

public class Sentence_Join {
    public static String JoinSentence(String x, String y) {
        String z;
        z = x + " " + y;
        return z;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Sentence1 : ");
        String a = sc.nextLine();
        System.out.println("Sentence2 :");
        String b = sc.nextLine();
        String c = JoinSentence(a, b);
        System.out.println(c);

    }
}
