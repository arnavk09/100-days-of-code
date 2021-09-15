package OOP;

import java.util.Scanner;

public class carClass {
    static class Car {
        String carName;
        double price;

        void enterCarNamePrice(String n, double x) {
            n = carName;
            x = price;
        }

        void renderDetails() {
            System.out.println("Name : " + carName + " \n Price : " + price);
        }
    }

    public static void main(String[] args) {
        Car c1 = new Car();
        Car c2 = new Car();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Car NAME : ");
        c1.carName = sc.next();
        System.out.println("Enter Car PRICE : ");
        c1.price = sc.nextDouble();
        System.out.println("Enter Car NAME : ");
        c2.carName = sc.next();
        System.out.println("Enter Car PRICE : ");
        c2.price = sc.nextDouble();
        c1.renderDetails();
        c2.renderDetails();

    }
}
