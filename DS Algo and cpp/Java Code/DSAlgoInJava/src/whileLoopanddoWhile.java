public class whileLoopanddoWhile {
    public static void main(String[] args) {
        int x=1;
        while (x<=5){
            System.out.println("WHILE LOOP : "+x);
            x+=1;
        }
        //DO-WHILE IMPLEMENTATION :
        int z=1;
        do {
            System.out.println("Do While LOOP : "+z);
            z=z+1;
        }while (z<=5);
    }
}
