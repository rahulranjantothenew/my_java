import java.util.*;
interface bicycle{   // interface ka object nhi bnnta hai//interface ka refrence bnn skta hai
    int a=45;  // ye final value hota h
    void applybrake(int decrement);  ////interface ka method ko imliment krnahi hoga
    void speedup(int increment);     ////interface ka method ko imliment krnahi hoga
}
interface hornbicycle{    
    int x=46;           
    void blowhornk3g();
    void blohornmhn();
}
class avoncycle implements bicycle, hornbicycle {   // multiple interfce use kr ke new class bnna skte hai// this is diff b/w abstract 
    void blowhorn(){                                           //and interface
        System.out.println("pee pee pee");
    }
    public void applybrake(int decrement){    //interface ka method ko imliment krnahi hoga// or isko public krna hoga
        System.out.println("applying brake");
    }
    public void speedup(int increment){    //interface ka method ko imliment krnahi hoga, or isko public krna hoga
        System.out.println("applying speedup");
    }
    public void blowhornk3g(){   //interface ka method ko imliment krnahi hoga, or isko public krna hoga
        System.out.println("kabhi khushi kabhi gum");
    }
    public void blohornmhn(){     //interface ka method ko imliment krnahi hoga, or isko public krna hoga
        System.out.println("main hu na po po");
    }
}
public class interface1{
    public static void main(String args[]){
    avoncycle ob4=new avoncycle();
    ob4.applybrake(1);
    ob4.speedup(2);
    //ob4.a=33;  nhi kr skte hai.
    System.out.println(ob4.a);
   
    ob4.blowhornk3g();
    ob4.blohornmhn();
     System.out.println(ob4.x);
    }

}
