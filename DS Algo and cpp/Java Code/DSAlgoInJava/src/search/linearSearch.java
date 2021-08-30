package search;

import java.util.Arrays;
import java.util.Scanner;

public class linearSearch {
    public static void main(String[] args) {
        int search, j;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter array size ");
        int x = sc.nextInt();
        int arr[] = new int[x];
        System.out.println("Enter " + x + " array elements :");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Array Entered : " + Arrays.toString(arr));

        System.out.println("What to search : ");
        search = sc.nextInt();
        for (j = 0; j < arr.length; j++) {
            if (arr[j] == search) {
                System.out.println("Found the element at position " + (j + 1));
                break;
            }
        }
        if (j == x) {
            System.out.println("Error!");
        }
    }

}
