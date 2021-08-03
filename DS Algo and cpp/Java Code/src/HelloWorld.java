import java.util.Scanner;

public class HelloWorld {
    public static void main(String[] args) {
        System.out.println("Hello World");
        int a, b;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter no1 :");
        a = sc.nextInt();
        System.out.println("Enter no2:");
        b = sc.nextInt();
        int c;
        c = addSum(a, b);
        //System.out.println(c);

    }

    public static int addSum(int x, int y) {
        int z = x + y;
        System.out.println("Yer Sum is :" + z);
        return z;
    }
}
