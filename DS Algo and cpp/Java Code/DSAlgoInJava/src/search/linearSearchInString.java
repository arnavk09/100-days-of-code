package search;

import java.util.Arrays;
import java.util.Objects;
import java.util.Scanner;

public class linearSearchInString {
    public static void main(String[] args) {
        int i, j, index;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter INDEX :");
        index = sc.nextInt();
        String[] arr = new String[index];
        System.out.println("Enter " + index + " elements :");
        for (i = 0; i < arr.length; i++) {
            arr[i] = sc.next();
        }
        System.out.println(" " + Arrays.toString(arr));
        System.out.println("Enter search query : ");
        String search = sc.next();
        for (j = 0; j < arr.length; j++)
        {
            if (Objects.equals(arr[j], search)) {
                System.out.println("Found the element at position " + (j + 1));
                break;
            }

        }
        if (j == index) {
            System.out.println("error");
            System.exit(0);
        }
    }
}
