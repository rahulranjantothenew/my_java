import java.util.*;
class student1{
    private int id;
    private String name;
    public int getid(){
        return id;
    }
    public void setid(int n){
      //id=n;
      this.id=n;
   }
   public String getname(){
        return name;
    }
    public void setname(String s){
       // name=s;
       this.name=s;
    }
}
 public class oop7{
    public static void main(String args[]){
        //Scanner sc=new Scanner(System.in);
        student1 rr1=new student1();
        rr1.setid(154);
        System.out.println(rr1.getid());
        //System.out.println("ur id n0="+id);
        rr1.setname("yadav");
        System.out.println(rr1.getname());
       
        
    }
}