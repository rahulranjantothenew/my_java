import java.util.*;
class mythread1 extends Thread{     //yenga extends hota hai
    public mythread1(String name){  //parametraise constractor
        super(name);                //parameter

    }
    public void run(){                // ye jrury hai run krane ke liye
        int i=34;
        System.out.println("bss yaise hi banayr hai jee");
       // while(true){
        //    System.out.println("good morning bro");
      //  }
    }
}
public class threadconstractor1{
    public static void main(String args[]){
        mythread1 n=new mythread1("rahul");
        mythread1 n1=new mythread1("ranjan");
        n.start();
        n1.start();
        System.out.println("the id of thread="+ n.getId());  //for thread id 
        System.out.println("the id of thread="+ n.getName()); //for thread name
        System.out.println("the id of thread="+ n1.getId());   //for thread id
        System.out.println("the id of thread="+ n1.getName());  ///for thread name

    }
}