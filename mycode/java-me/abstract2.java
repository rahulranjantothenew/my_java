import java.util.*;
abstract class animal{  //abstract class ka object nhi bann skta;

    abstract void walk();  //abstract method ka use kr skte hai.ya fir class ko abstract bano dono me se ek kam krana hoga

void breathe(){   //method bnna skte hai
    System.out.println("this animal breath air");
}
animal(){      //contractor use kr skte hai
    System.out.println(" i am a constracter");
}
}
class horse extends animal{
    horse(){
        System.out.println("wow you have created a horse");
    }
    void walk(){  //abstract method use
        System.out.println("horse walk on 4 leg");
    }
}
class chicken extends animal{
    chicken(){
        System.out.println("wow you have created a chicken");
    }
    void walk(){
        System.out.println("checken walk 2 legs");
    }
}
public class abstract2{
    public static void main(String args[]){
        chicken h=new chicken();
        h.walk();
        h.breathe();
    }
}
