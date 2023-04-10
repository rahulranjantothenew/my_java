import java.util.*;
class threadmethod extends Thread {
    public void run(){
        for(int i=0; i<10; i++){
            System.out.println(i);
        }
    }
    
}
public class threadmethods3 extends Thread{
    public static void main(String args[]){
        threadmethods3 tt1=new threadmethods3();
        tt1.start();
        tt1.interrupt();
        System.out.println("main Thread");
    }
}
