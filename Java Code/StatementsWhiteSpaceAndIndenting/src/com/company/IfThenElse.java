package com.company;

public class IfThenElse {

    public static void main(String[] args) {
        boolean gameOver = true;
        int score = 5000;
        int levelCompleted = 5;
        int bonus = 100;
        if (score < 5000) {
            System.out.println("Eat it");
        } else if (score < 1000) {
            System.out.println("well, you lose");
        } else {
            System.out.println("ah well");
       }
        int score2 = 10000;
        int levelCompleted2 = 8;
        int bonus2 = 200;
        if (gameOver) {
            int finalscorenew = score2 + (levelCompleted2 * bonus2);
            System.out.println("Yer Final Score IS :" + finalscorenew);
        }


    }
}