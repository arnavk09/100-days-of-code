package basicsrevision;
import java.util.Scanner;
public class factorsOfNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Number : ");
        int x=sc.nextInt();
        for (int y=1;y<=x;y++){
            if (x%y==0){
                System.out.println(y+ " "+" \n ");
            }
        }
    }
}
