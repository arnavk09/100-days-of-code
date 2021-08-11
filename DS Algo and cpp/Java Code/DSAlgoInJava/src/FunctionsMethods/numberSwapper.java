package FunctionsMethods;

import java.util.Scanner;

public class numberSwapper {
    public static void main(String[] args) {
       swapper();
    }

    static void swapper()                                    //using VOID
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Num1 : ");
        int x=sc.nextInt();
        System.out.println("Num2 : ");
        int y=sc.nextInt();
        System.out.println("Entered Combination is : "+x + " , "+ y);
        int temp=x;
        x=y;
        y=temp;
        System.out.println("SWAPPED Combination is : "+x + " , "+ y);
    }
}
