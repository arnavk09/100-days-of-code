package FunctionsMethods;
import javax.swing.*;
import java.util.Scanner;

public class stringMethod {
    public static void main(String[] args) {
        int x=0,y=0,z=0;
        int a=x+y+z;
        System.out.println(a);
        String message=greetings();
        System.out.println(message);
        greeter("doesn't matter");  //params don't matter if you're gonna be replacing them with the entered value from scanner.
        greeterz();
    }
    static String greetings(){
        String greet="Hello World";
        return greet;
    }
    //inefficient way using a return
    static String greeter(String name){
        Scanner sc = new Scanner(System.in);
        System.out.println("NAME : ");
        String name2=sc.next();
        System.out.println("HELLO! "+ name2);
        name=name2;
        return name;
    }
    //efficient void method
    static void greeterz(){
        Scanner sc = new Scanner(System.in);
        System.out.println("NAME : ");
        String name = sc.next();
        System.out.println("Hey! "+name);
    }
}
