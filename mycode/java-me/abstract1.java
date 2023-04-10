import java.util.*;
abstract class parent2{  //abstract class ka object nhi banta
    public parent2(){
        System.out.print("i am parent2 class constructor");
    }
    public void sayhello(){
        System.out.println("hello");
    }
    abstract public void greet();
    abstract public void greet2();
}
class child2 extends parent2{
    public void greet(){
        System.out.print("heello greet");
    }
    public void greet2(){
        System.out.println("hello greet2");
    }
}
abstract class child3 extends parent2{
    public void th(){
        System.out.println("welcome abstract child3");
    }
}
public class abstract1{
    public static void main(String args[]){
        child2 c=new child2();    //ban skta hai kyu ki abstract class nhi hai ye sirf inherite kar raha hai parent2 ko
        //child3 d=new child3();//object nhi banega kyu ki abstract class hai

    }
}