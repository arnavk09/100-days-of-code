package OOP;

public class circlePandA {
    static class Circle {
        double radius;

        double getPerimeter(double r) {
            radius = r;
            return 2 * 3.14 * r;
        }

        double getArea(double r2) {
            radius = r2;
            return 3.14 * r2 * r2;
        }


    }

    public static void main(String[] args) {
        Circle c1 = new Circle();
        double p = c1.getPerimeter(4);
        System.out.println("Perimeter : " + p);
        double a = c1.getArea(4);
        System.out.println(a);

    }
}
