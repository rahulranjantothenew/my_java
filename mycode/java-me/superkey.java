//import java.util.*;
class suup{
    int id;
    public int getid(){
        return id;
    }
    suup(int a){
        this.id=a;
    }
   // public int returnone(){
     //   return 1;
    //}
}
class suup1 extends suup {
    suup1(int c){
        super(c);
    
    System.out.println("i am a constructer");
    }
}
public class superkey{
    public static void main(String args[]){
       // suup ob1= new suup(55);
        suup1 ob2= new suup1(65);
        //System.out.println(ob1.getid());
        System.out.println("ur id="+ob2.getid());
    }
}