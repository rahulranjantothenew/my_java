import java.util.*;
class mythread1 extends Thread {   //Thread ko extends krna hoga
    public void run(){             //run method ko call krana hoga
        int i=0;
        while(i<400){
            System.out.println("hello i am thread");
            System.out.println("i am happy");
            i++;
        }
    }
}
class mythread2 extends Thread {        //thread ko extends krana hoga
    public void run(){                  //run method ko call krna hoga
        int i=0;
        while(i<400){
            System.out.println("hello i am thread2");
            System.out.println("i am sad");
            i++;
        }
    }
}
public class extendingthread1{
    public static void main(String args[]){
        mythread1 gun4=new mythread1();   //
        mythread2 gun5=new mythread2();
        gun4.start();   //start method ko call krna hoga
        gun5.start();  // start method ko call krna hoga
        //ob7.run();   // ye nahi kr skte hai 
        //ob8.run();   // ye nhi kr skte hai
    }
}