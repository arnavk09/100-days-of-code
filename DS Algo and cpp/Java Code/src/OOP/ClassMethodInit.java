package OOP;

//INIT by METHODS
public class ClassMethodInit {
    static class Students {
        int id;
        String name;

        void insertVal(int x, String y) {
            id = x;
            name = y;
        }
        void renderValue(){
            System.out.println("ID : "+ id +" \n Name : "+ name);
        }
    }

    public static void main(String[] args) {
        Students s1=new Students();
        Students s2=new Students();
        s1.insertVal(1,"Aiden");
        s2.insertVal(2,"Brian");
        s1.renderValue();
        s2.renderValue();

    }
}
