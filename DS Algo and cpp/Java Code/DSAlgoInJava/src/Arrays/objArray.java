package Arrays;

import java.util.Arrays;
import java.util.Scanner;

public class objArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] str = new String[5];
        System.out.println("Enter String Array : ");
        for (int i = 0; i < str.length; i++) {
            str[i] = sc.next();
        }
        str[2]="mandatory"; // changes original value only
        System.out.println("String array is : " + Arrays.toString(str));
    }
}
