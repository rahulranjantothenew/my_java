import java.util.*;
class mythread1 implements Thread{
    public mythread1(String name){
        super(name);

    }
    public void run(){
        int i=34;
        System.out.println("bss yaise hi banayr hai jee");
        while(true){
            System.out.println("good morning bro");
        }
    }
}
public class threadconstractor{
    public static void main(String arga[]){
        mythread1 n=new mythread1("rahul");
        mythread1 n1=new mythread1("ranjan");
        n.start();
        n1.start();
        System.out.println("the id of thread="+n.getid());
        System.out.println("the id of thread="+n.getname());
        System.out.println("the id of thread="+n1.getid());
        System.out.println("the id of thread="+n1.name());

    }
}