package search;

import java.util.Arrays;
import java.util.Scanner;

public class binarySearch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter array size ");
        int x = sc.nextInt();
        int arr[] = new int[x];
        System.out.println("Enter " + x + " array elements :");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Array Entered : " + Arrays.toString(arr));

        int first, last, mid, search;
        System.out.println(" Enter element to search : ");
        search = sc.nextInt();
        first = 0;
        last = x - 1;
        mid = (first + last) / 2;
        while (first <= last) {
            if (arr[mid] < search) {
                first = mid + 1;
            } else if (arr[mid] == search) {
                System.out.println("found " + search + " at position " + (mid + 1));
                break;
            } else {
                last = mid - 1;
            }
            mid = (first + last) / 2;
        }
        if (first > last) {
            System.out.println("error. Cannot find element.");
            System.exit(0);
        }

    }
}
