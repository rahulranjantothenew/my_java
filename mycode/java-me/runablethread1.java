import java.util.*;
class mythreadrunnable1 implements Runnable{
    public void run(){
        System.out.println("i am thread 1 not threat1");
        System.out.println("i am thread 1 not threat1"); 
        System.out.println("i am thread 1 not threat1");
        System.out.println("i am thread 1 not threat1");
        System.out.println("i am thread 1 not threat1");
        System.out.println("i am thread 1 not threat1");
        System.out.println("i am thread 1 not threat1");
        System.out.println("i am thread 1 not threat1");
        System.out.println("i am thread 1 not threat1");
        System.out.println("i am thread 1 not threat1");
    }
}
class mythreadrunnable2 implements Runnable{
    public void run(){
        System.out.println("i am thread 2 not threat 2");
        System.out.println("i am thread 2 not threat 2");
        System.out.println("i am thread 2 not threat 2");
        System.out.println("i am thread 2 not threat 2");
        System.out.println("i am thread 2 not threat 2");
        System.out.println("i am thread 2 not threat 2");
        System.out.println("i am thread 2 not threat 2");
        System.out.println("i am thread 2 not threat 2");
    }
}
public class runablethread1{
    public static void main(String args[]){
       mythreadrunnable1 bullet1=new mythreadrunnable1();
       Thread gun1=new Thread(bullet1);                      //runnable thread function ko thread kr ke use krte hai
       mythreadrunnable2 bullet2=new mythreadrunnable2();
       Thread gun2=new Thread(bullet2);                      //runnable thread function ko thred kr ke use krte hai
       gun1.start();
       gun2.start();
    }
}