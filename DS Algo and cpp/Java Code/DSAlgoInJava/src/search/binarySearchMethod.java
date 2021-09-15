package search;

import java.util.Arrays;
import java.util.Scanner;

public class binarySearchMethod {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Index : ");
        int index = sc.nextInt();
        int[] arr = new int[index];
        System.out.println(" Enter " + index + " Array Elements :");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Array : " + Arrays.toString(arr));
        System.out.println("target : ");
        int target = sc.nextInt();
        int answer = binarySearch(arr, target);
        System.out.println("Index :" + answer);


    }

    static int binarySearch(int[] arr, int target) {
        int start = 0;
        int end = arr.length - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (target < arr[mid]) {
                end = mid - 1;
            } else if (target > arr[mid]) {
                start = mid + 1;
            } else {
                return mid;
            }
        }
        return -1;

    }
}
