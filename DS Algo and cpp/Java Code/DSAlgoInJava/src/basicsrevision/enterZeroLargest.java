package basicsrevision;
import java.util.Scanner;
public class enterZeroLargest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int sum=0;
        System.out.println("Enter 3 num and then enter 0:");
        int num=sc.nextInt();
        while(num>0){
            num=sc.nextInt();
            sum=sum+num;
        }
        System.out.println("LARGEST :"+sum);
    }
}
