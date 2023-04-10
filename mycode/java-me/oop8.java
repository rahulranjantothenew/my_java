import java.util.*;
class st{
    int id;
    String name;
    //String clas;
    //String code;
    public void getid(){
        System.out.println("ur id is="+id);
        System.out.println("ur name is="+name);
    }
}
public class oop8{
    public static void main(String args[]){
        st rr2=new st();
        st rr3=new st();
        rr2.id=12;
        rr2.name="rahul";
        rr3.id=13;
        rr3.name="ranjan";
        rr2.getid();
        rr3.getid();
    }
}