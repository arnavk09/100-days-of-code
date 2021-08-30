package search;

import java.util.Arrays;
import java.util.Scanner;

public class rangedLinearSearch {
    public static void main(String[] args) {
        int index, i, j, search, start, end;
        System.out.println("Enter Index : ");
        Scanner sc = new Scanner(System.in);
        index = sc.nextInt();
        int[] arr = new int[index];
        for (i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println(" " + Arrays.toString(arr));
        System.out.println("Enter Element to search :");
        search = sc.nextInt();
        System.out.println("Enter Start INDEX (0 to ending) : ");
        start = sc.nextInt();
        System.out.println("Enter End  (0 to ending) : ");
        end = sc.nextInt();
        for (j = start; j < end; j++) {
            if (arr[j] == search) {
                System.out.println("found element @ position " + (j + 1));
                break;
            }

        }
        if (j == index) {
            System.out.println("error");
        }

    }
}