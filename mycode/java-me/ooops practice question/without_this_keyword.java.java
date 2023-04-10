class Pen{
    String colour;
    public void printcolor(){
        System.out.println("your pen colour is="+ colour);
    }
}
public class without_this_keyword{
    public static void main(String args[]){

        Pen o1=new Pen();
        o1.colour="red";
        o1.printcolor();
    }
} 
