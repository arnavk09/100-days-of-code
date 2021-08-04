package basicsrevision;
import java.util.Scanner;
public class factorialSolver {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long x=1;
        System.out.println("Enter Number");
        long number=sc.nextLong();
        for(int i=1;i<=number;i++){
            x=x*i;
        }
        System.out.println("Factorial of "+number+" is: "+x);
    }
}

