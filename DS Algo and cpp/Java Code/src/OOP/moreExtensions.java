package OOP;

import java.util.Scanner;

public class moreExtensions {
    static class School {
        String name;
    }

    static class student extends School {
        int classgrade_1;
        String Section;

        void enterData(String namez, int classgrade, String sec) {
            namez = name;
            classgrade = classgrade_1;
            sec = Section;

        }

        void renderDetails() {
            System.out.println("Name : " + name + "\n" + "Class : " + classgrade_1 + "\n" + "Sec : " + Section);
        }

    }


    public static void main(String[] args) {
        System.out.println("Enter Data Below \n");
        Scanner sc = new Scanner(System.in);
        student s1 = new student();
        student s2 = new student();
        System.out.println("Enter Name : ");
        s1.name = sc.next();
        System.out.println("Enter grade : ");
        s1.classgrade_1 = sc.nextInt();
        System.out.println("Enter Section : ");
        s1.Section = sc.next();
        System.out.println("Enter Name : ");
        s2.name = sc.next();
        System.out.println("Enter grade : ");
        s2.classgrade_1 = sc.nextInt();
        System.out.println("Enter Section : ");
        s2.Section = sc.next();
        s1.renderDetails();
        s2.renderDetails();
        System.out.println("***End of Program***");

    }
}
