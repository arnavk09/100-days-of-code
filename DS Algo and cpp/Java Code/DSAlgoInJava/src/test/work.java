package test;
import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Scanner;

public class work {
    public static void main(String[] args) {
        int index, target;

        System.out.println("Enter Array Index : ");
        Scanner sc = new Scanner(System.in);
        index = sc.nextInt();
        int[] arr = new int[index];
        System.out.println(" enter " + index + " elements : ");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Array : " + Arrays.toString(arr));
        System.out.println("Enter TARGET : ");
        target = sc.nextInt();
        int ans = linearSearch(arr, target);
        System.out.println("Index of target : " + ans);


    }

    static int linearSearch(int[] arr, int target) {
        if (arr.length == 0) {
            System.out.println("Error!");
        }
        for (int x = 0; x < arr.length; x++) {
            if (arr[x] == target) {
                return x;
            }
        }
        return -1;
    }

}

