import java.util.*;
class mythreadrunnable1 implements Runnable{
    public void run(){
        System.out.println("i am thread 1 not threat1");
        System.out.println("i am thread 1 not threat1"); 
        System.out.println("i am thread 1 not threat1");
        System.out.println("i am thread 1 not threat1");
        System.out.println("i am thread 1 not threat1");
    }
}
class mythreadrunnable2 implements runnable{
    public void run(){
        System.out.println("i am thread 2 not threat 2");
        System.out.println("i am thread 2 not threat 2");
        System.out.println("i am thread 2 not threat 2");
        System.out.println("i am thread 2 not threat 2");
    }
}
public class runablethread{
    public static void main(String args[]){
        mythreadrunnable1 rr2=new mythreadrunnable1();
       thread gun1=new thread(rr2);
       mythreadrunnable2 rr3=new mythreadrunnable2();
       thread gun2=new thread(rr3);
       gun1.start();
       gun2.start();
    }
}