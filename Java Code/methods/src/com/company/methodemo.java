package com.company;

public class methodemo {
    public static void main(String[] args) {
        boolean gameOver;
        int score;
        int levelComplete;
        int bonus;
        calculateScore(true, 800, 5, 100);
        calculateScore(true, 10000, 8, 200);
    }

    public static int calculateScore(boolean gameOver, int score, int levelCompleted, int bonus) {
        if (gameOver == true) {
            int finalScore = score + (levelCompleted * bonus);
            System.out.println("Yer Score : " + finalScore);
            return finalScore;
        } else {
            return -1;
        }
    }
}