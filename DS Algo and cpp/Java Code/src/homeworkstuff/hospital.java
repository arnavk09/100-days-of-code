package homeworkstuff;

import java.util.Scanner;

public class hospital {
    class Patient {
        int Id, TelNo, Age, RoomNo;
        char name, address, sex;

        void payBills(int bill) {
            Scanner sc = new Scanner(System.in);
            bill = sc.nextInt();
            System.out.println("Amount Due : " + bill);
        }

    }

    class Doctor {
        int docId, PhNo;
        char Address, Name, Department, Specialization;

        void prescribeMedicnes(String MedName1, String MedName2) {
            System.out.println("Enter Medicine Name 1:");
            Scanner sc = new Scanner(System.in);
            MedName1 = sc.next();
            System.out.println("Enter Medicine Name 2:");
            MedName2 = sc.next();
            System.out.println("Prescription : " + MedName1 + "\n" + MedName2);
        }

        void checkReport() {
            System.out.println("Reports OK");
        }

        void prescribeTests(String test1, String test2) {
            System.out.println("Enter Test Name 1:");
            Scanner sc = new Scanner(System.in);
            test1 = sc.next();
            System.out.println("Enter Test Name 2:");
            test2 = sc.next();
            System.out.println("Prescription : " + test1 + "\n" + test2);
        }

        void drawSalary(int salary) {
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter Salary to be drawn :");
            salary = sc.nextInt();
            System.out.println("Salary withdrawn successfully.");
        }


    }

}
