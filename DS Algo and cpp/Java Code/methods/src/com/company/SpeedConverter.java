package com.company;

public class SpeedConverter {
    public static long toMilesPerHour(double kilometersPerHour) {
        if (kilometersPerHour < 0) {
            return -1;

        }
        double milesPerHour = kilometersPerHour / 1.609;
        return (long) milesPerHour;
    }

    public static void printConversion(double kilometersPerHour) {
        double milesPerHour = kilometersPerHour / 1.609;
        if (kilometersPerHour > 0) {
            long y = Math.round(milesPerHour);
            System.out.println(kilometersPerHour + "km/h" + " = " + y + "mi/h");
        } else if (kilometersPerHour == 0) {
            System.out.println("0.0 km/h = 0 mi/h");
        } else if (kilometersPerHour < 0) {
            System.out.println("Invalid Value");
        }

    }
}
