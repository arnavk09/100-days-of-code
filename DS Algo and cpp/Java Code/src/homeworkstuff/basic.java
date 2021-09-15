package homeworkstuff;

import java.util.Scanner;

public class basic {

    static class Employee {
        public int Empid, EmpBsalary;
        String EmpName, EmpGender, EmpAddress, EmpDept;

        void createEmployee(int eid, int empbsal, String ename, String egender, String eaddress, String edept) {
            Empid = eid;
            EmpBsalary = empbsal;
            EmpName = ename;
            EmpGender = egender;
            EmpAddress = eaddress;
            EmpDept = edept;
        }

        void showDetails() {
            System.out.println("\n ID :" + Empid + "\n Name : " + EmpName + "\n Base Salary : " + EmpBsalary + "\n Gender : " + EmpGender + "\n Address : " + EmpAddress +
                    "\n Department : " + EmpDept);
        }

        String changeDept() {
            System.out.println("Current Department : " + EmpDept);
            System.out.println("Enter New Department : ");
            String newDept;
            Scanner sc = new Scanner(System.in);
            newDept = sc.next();
            if (newDept != EmpDept) {
                EmpDept = newDept;
            }
            System.out.println("New Department : " + newDept);
            return newDept;
        }

        String changeAddress() {
            System.out.println("Current Address : " + EmpAddress);
            System.out.println("Enter New Address : ");
            String newAdd;
            Scanner sc = new Scanner(System.in);
            newAdd = sc.next();
            if (newAdd != EmpAddress) {
                EmpAddress = newAdd;
            }
            System.out.println("New Address : " + newAdd);
            return newAdd;
        }

        long changeBSalary() {
            System.out.println("Current Salary : " + EmpBsalary);
            System.out.println("Enter New Salary : ");
            int newSal;
            Scanner sc = new Scanner(System.in);
            newSal = sc.nextInt();
            if (newSal != EmpBsalary) {
                EmpBsalary = newSal;
            }
            System.out.println("New Department : " + newSal);
            return newSal;
        }

        long calculateSalary(int original) {
            original = EmpBsalary;
            long taxDeduction = 20000;
            long inhand = original - taxDeduction;
            return inhand;
        }

    }


    public static void main(String[] args) {
        Employee e1= new Employee();
        e1.EmpName="David";
        e1.Empid=3030909;
        e1.EmpDept="Accounts";
        e1.EmpBsalary=30000;
        e1.EmpGender="M";
        e1.EmpAddress="Jalandhar";

        e1.showDetails();

    }
}
