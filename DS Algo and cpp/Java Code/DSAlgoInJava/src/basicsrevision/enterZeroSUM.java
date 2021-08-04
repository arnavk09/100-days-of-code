package basicsrevision;
import java.util.Scanner;
public class enterZeroSUM {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int sum=0;
        System.out.println("Enter 3 num ");
        int num=sc.nextInt();
        while(num>0){
            num=sc.nextInt();
            sum=sum+num;
        }
        System.out.println("SUM :"+sum);
    }
}
