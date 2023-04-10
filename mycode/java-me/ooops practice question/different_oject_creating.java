class Pen{
    String colour;
    public void printcolor(){
        System.out.println("your pen colour is="+ this.colour);
    }
}
public class different_oject_creating{
    public static void main(String args[]){

        Pen o1=new Pen();
        o1.colour="red";
        o1.printcolor();
        Pen o2=new Pen();
        o2.colour="lal";
        o2.printcolor();
        Pen o3=new Pen();
        o3.colour="lal lal lal";
        o3.printcolor();
    }
}