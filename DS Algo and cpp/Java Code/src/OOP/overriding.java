package OOP;

public class overriding {
    static class A {
         A() {
            System.out.println("Ran from A");
        }

    }

    static class B extends A {
         B() {
            System.out.println("Ran from B");
        }
    }

    public static void main(String[] args) {
        B obj1 = new B();
    }
}
