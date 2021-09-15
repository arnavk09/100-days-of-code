package homeworkstuff;

import java.util.Arrays;
import java.util.Scanner;

public class Main {


    public static void main(String[] args) {
        int arr[]={1,1,2,3,4};
        for (int i=0;i<arr.length;i++){
            int o;
            if (arr[i] == arr[i + 1]){
                o=arr[i+1];
                arr[i+1]= 0;
                break;
            }
        }
        System.out.println(Arrays.toString(arr));

    }
}
