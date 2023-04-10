import java.util.*;
class cl{
    public void meth1(){
        System.out.println("i am method i of class cl");

    }
}
class cl1 extends cl{
    //dono ka method ka name same hone ke karn hi override karte h program.
    public void meth1(){
        System.out.println("i am a method of class cl1");
    }

}
public class override{
    public static void main(String args[]){
        cl a=new cl();
        a.meth1();
        cl1 b=new cl1();
        b.meth1();
    }
}