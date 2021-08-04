package basicsrevision;

import java.util.Scanner;

public class primeNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x,y=2,z;
        x=sc.nextInt();
        if (x<=1){
            System.out.println("Neither PRIME nor COMPOSITE");
        return;
        }
        if(x==4){
            System.out.println("not PRIME");
        }else{
            while (y*y<x){
                if (x%y==0){
                    System.out.println("NOT PRIME");
                    return;
                }
                y++;

            }
            if (y*y>x){
                System.out.println("PRIME");
            }
        }


    }
}
