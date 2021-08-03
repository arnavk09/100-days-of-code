package com.company;

public class BarkingDog {
    public static void main(String[] args) {
    }


    public static boolean shouldWakeUp(boolean barking, int houroftheday) {
        if (barking == false || houroftheday < 0 || houroftheday > 23)
            return false;
        else if (barking && houroftheday >= 0 && houroftheday < 8)
            return true;
        else if (barking && houroftheday > 22 && houroftheday <= 23)
            return true;
        else {
            return false;
        }
    }

}