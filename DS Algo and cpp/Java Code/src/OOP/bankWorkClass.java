package OOP;

import java.util.Scanner;

public class bankWorkClass {
    static class account {
        String username;
        long accountNumber;
        long balance;
        String bankName;

        void newAcc(String u, long a, long b, String n) {
            u = username;
            a = accountNumber;
            b = balance;
            n = bankName;
        }

        void render() {
            System.out.println(username + " \n " + accountNumber + " \n " + balance + " \n " + bankName);
        }

        long withdraw(long a, long amount) {
            a = accountNumber;
            long balance = a - amount;
            return balance;

        }

        long deposit(long a, long amount) {
            a = accountNumber;
            long balance = a + amount;
            return balance;

        }


    }

    public static void main(String[] args) {
        account a1 = new account();
        Scanner sc = new Scanner(System.in);
        System.out.println("Bank Name : ");
        a1.bankName = sc.next();
        System.out.println("Username : ");
        a1.username = sc.next();
        System.out.println("Bank a/c number : ");
        a1.accountNumber = sc.nextLong();
        System.out.println("Balance :");
        a1.balance = sc.nextLong();

        account a2 = new account();
        System.out.println("Bank Name : ");
        a2.bankName = sc.next();
        System.out.println("Username : ");
        a2.username = sc.next();
        System.out.println("Bank a/c number : ");
        a2.accountNumber = sc.nextLong();
        System.out.println("Balance :");
        a2.balance = sc.nextLong();

        a1.render();
        a2.render();


    }
}
