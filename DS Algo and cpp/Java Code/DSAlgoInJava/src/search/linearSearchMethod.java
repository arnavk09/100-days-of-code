package search;

import java.util.Arrays;
import java.util.Scanner;

public class linearSearchMethod {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("INDEX :");
        int index = sc.nextInt();
        int[] arr = new int[index];
        System.out.println("Enter " + index + " elements :");
        for (int j = 0; j < arr.length; j++) {
            arr[j] = sc.nextInt();
        }
        System.out.println(" " + Arrays.toString(arr));
        System.out.println("Target element :");
        int search = sc.nextInt();
        int ans = linearSearch(arr, search);
        System.out.println("Index of target : " + ans);


    }

    static int linearSearch(int[] arr, int target) {
        //misc check
        if (arr.length == 0) {
            return -1;
        }
        for (int index = 0; index < arr.length; index++) {
            if (arr[index] == target) {
                return index;
            }
        }

        return -1;
    }

}
