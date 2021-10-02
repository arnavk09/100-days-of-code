package OOP;

public class extendingThings {
    static class Vehicle {
        protected String brand = "Ford";

        public void honk() {
            System.out.println("Beep Beep");
        }
    }

    static class Car extends Vehicle {
        private String ModelName = "Mustang";
    }

    public static void main(String[] args) {
        Car myCar = new Car();
        myCar.honk();
        System.out.println(myCar.brand + " " + myCar.ModelName);

    }
}
