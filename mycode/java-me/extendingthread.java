import java.util.*;
class mythread1 extends Thread{
    public void run(){
        int i=0;
        while(i<0){
            System.out.println("hello i am thread");
            System.out.println("i am happy");
            i++;
        }
    }
}
class mythread2 extends Thread{
    public void run(){
        int i=0;
        while(i<400){
            System.out.println("hello i am thread2");
            System.out.println("i am sad");
            i++;
        }
    }
}
public class extendingthread{
    public static void main(String args[]){
        mythread1 t1=new mythread1();
        mythread2 t2=new mythread2();
        t1.start();
        t2.start();
    }
}