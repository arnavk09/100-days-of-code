package OOP;

import javax.print.Doc;
import java.util.Scanner;

public class practice1 {
    static class Hospital {
        int empId;
        String empName;
        String patientName;
    }

    static class Doctor extends Hospital {
        void enterData() {
            this.empId = empId;
            this.empName = empName;
//            this.patientName = patientName;
        }

        void renderData() {
            System.out.println("ID : " + empId + "\n" + "NAME : " + empName);
        }

    }

    public static void main(String[] args) {
        Doctor d1 = new Doctor();
        Scanner sc = new Scanner(System.in);
        System.out.println("EmpId : ");
        d1.empId = sc.nextInt();
        System.out.println("Name : ");
        d1.empName = sc.next();
        d1.renderData();

    }
}
