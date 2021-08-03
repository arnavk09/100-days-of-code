package com.company;

public class MethodChallengeOne {
    public static void main(String[] args) {
        //posn1
        int highScorePosition1 = calculateHighScorePosition(1500);
        displayHighScorePosition("Tim", highScorePosition1);
        //posn2
        int highScorePosition2 = calculateHighScorePosition(900);
        displayHighScorePosition("Alan", highScorePosition2);
        //posn3
        int highScorePosition3 = calculateHighScorePosition(400);
        displayHighScorePosition("Michael", highScorePosition3);
        //posn4
        int highScorePosition4 = calculateHighScorePosition(50);
        displayHighScorePosition("James", highScorePosition4);
    }

    public static void displayHighScorePosition(String PlayerName, int x) {
        System.out.println(PlayerName + " managed to get into position " + x + " on the High Score table! ");

    }

    public static int calculateHighScorePosition(int score) {
        if (score >= 1000) {
            return 1;
        } else if (score >= 500 && score < 1000) {
            return 2;
        } else if (score >= 100 && score < 500) {
            return 3;
        } else {
            return 4;
        }

    }
}
//I DID IT ! ! ! (13/10/2020 @ 1254 HRS)
