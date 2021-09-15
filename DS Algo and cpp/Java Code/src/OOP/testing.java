package OOP;

import java.text.NumberFormat;
import java.util.Scanner;

public class testing {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long y=sc.nextLong();
//        long x = 1436438765869L;
        System.out.println(" $ " + NumberFormat.getIntegerInstance().format(y));
    }
}
