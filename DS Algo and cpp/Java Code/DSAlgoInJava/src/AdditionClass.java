import javax.swing.*;
import java.util.Scanner;

public class AdditionClass {
    public static void main(String[] args) {
        //We have "static" above as we don't want to create an object AdditionClass, we just want to run the fn.
        double x,y,z;
        Scanner s= new Scanner(System.in);
        System.out.println("Enter num1 : ");
        x=s.nextDouble();
        System.out.println("Enter num2 : ");
        y=s.nextDouble();
        z=sum(x,y);
        System.out.println("Sum is : "+z);
        System.exit(0);
    }
    private static double sum (double a, double b) {
        double z;
        z=a+b;
        return z;
    }

}
