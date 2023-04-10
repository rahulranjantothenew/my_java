import java.util.*;
class student2{
   private int id;
   private String name;
   
    public int getid(){
        return id;
    }
    public void setid(int n){
        this.id=n;
    }
    public String getname(){
        return name;
    }
    public void setname(String m){
        this.name=m;
    }
    student2(){
        id=12;
        name="ranjan";
    }
    
}
public class constructer{
    public static void main(String args[]){
        student2 rr4=new student2();
        //rr4.setid(1);
        System.out.println(rr4.getid());
        //rr4.setname("rahul");
        System.out.println(rr4.getname());
    }
}