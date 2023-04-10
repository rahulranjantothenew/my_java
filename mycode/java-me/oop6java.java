import java.util.*;
class student1{
    private int id;
    private String name;
   
    public void setid(int n){
        n=id;
    }
    public int getid(){
        return id;
    }
    public String getname(){
        return name;
    }
    public void setname(String s){
        s=name;
    }
}
class oop6{
    public static void main(String args[]){
        student1 rr=new student1();
        rr.setid(12);
        System.out.println(rr.getid());
        rr.setname("rahul");
        System.out.println(rr.getname());
    }
}