package OOP;

import java.util.Scanner;

public class someMorePractice {
    static class College {
        protected String StudentName;
        protected int studentID;
        protected long phoneNum;
    }

    static class Student extends College {
        void enterData() {
            this.StudentName = StudentName;
            this.studentID = studentID;
            this.phoneNum = phoneNum;
        }

        void renderData() {
            System.out.println("\n" + "Name : " + StudentName + "\n" + "ID : " + studentID + "\n" + "Phone : " + phoneNum + "\n");
        }

    }

    public static void main(String[] args) {
        Student s1 = new Student();
        Scanner sc = new Scanner(System.in);
        System.out.println("Student 1 DATA : ");
        System.out.println("Name : ");
        s1.StudentName = sc.next();
        System.out.println("ID : ");
        s1.studentID = sc.nextInt();
        System.out.println("Phone : ");
        s1.phoneNum = sc.nextInt();
        int choice;
        System.out.println("Enter 1 to go to Student 2 or Enter 0 to Exit.");
        choice = sc.nextInt();
        if (choice == 1) {
            System.out.println("Student 2 DATA : ");
            Student s2 = new Student();
            System.out.println("Name : ");
            s2.StudentName = sc.next();
            System.out.println("ID : ");
            s2.studentID = sc.nextInt();
            System.out.println("Phone : ");
            s2.phoneNum = sc.nextLong();
            s1.renderData();
            s2.renderData();
        } else {
            System.out.println("Exiting Program....");
            System.exit(0);
        }
    }
}
