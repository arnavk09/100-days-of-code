package OOP;
//INIT BY REFERENCE
import java.util.Scanner;

public class ClassesIntro {
    static class Student {
        int id;
        String name;
    }

    public static void main(String[] args) {
        Student s1 = new Student();
        Scanner sc = new Scanner(System.in);
        s1.id = sc.nextInt();
        s1.name = sc.next();
        System.out.println(s1.id);
        System.out.println(s1.name);
    }

}
