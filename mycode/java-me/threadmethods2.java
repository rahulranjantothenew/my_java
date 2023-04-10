import java.util.*;
class threadmethods extends Thread{
    public void run(){
        try{
            for(int i=0; i<5; i++){
                System.out.println("child thread");
                Thread.sleep(4000);
            }
        }
        catch (InterruptedException e){
            System.out.println("child Thread Interrupted");
        }
        System.out.println("Thread is running");
    }
    
}
public class threadmethods2 extends Thread{
    public static void main(String args[]){
        threadmethods2 t1= new threadmethods2();
        t1.start();
        t1.interrupt();
        System.out.println("Main Thread");
    }
}
