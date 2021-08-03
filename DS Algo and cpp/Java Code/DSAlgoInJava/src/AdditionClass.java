import java.util.Scanner;

public class AdditionClass {
    public static void main(String[] args) {
        int x,y,z;
        Scanner s= new Scanner(System.in);
        System.out.println("Enter num1 : ");
        x=s.nextInt();
        System.out.println("Enter num2 : ");
        y=s.nextInt();
        z=x+y;
        System.out.println(z);
        System.exit(0);
    }
}
