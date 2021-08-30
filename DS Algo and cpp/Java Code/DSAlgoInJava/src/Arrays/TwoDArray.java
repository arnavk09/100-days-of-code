package Arrays;

import java.util.Arrays;
import java.util.Scanner;

public class TwoDArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[][] arr = new int[3][3];
//IN
        System.out.println("Enter 3x3 Array Matrix : ");
        for (int row = 0; row < arr.length; row++) {
            for (int col = 0; col < arr[row].length; col++) {                //LENGTH OF THE ARRAY AT THAT ROW
                arr[row][col] = sc.nextInt();
            }
        }
        //OUT
        System.out.println("Array is :");
        for (int[] ints : arr) {
            System.out.println(Arrays.toString(ints));
        }
        System.exit(0);
    }
}
