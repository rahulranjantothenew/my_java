import java.util.*;
class st3{
    String name;
  
    public void getname(String n){
       this.name=n;
    }
    public String setname(){
        return name;
    }
   
}
class st4 extends st3{
    int id;
    public void getid(int m){
     this.id=m;
    }
    public int setid(){
        return id;
    }
    st4(){
        name="ranjan";
        id=12;
    } 
}

public class inheritancewithconstractor{
    public static void main(String args[]){
        st4 r5=new st4();
       // r5.getname("ram");
        System.out.println(r5.setname());
        //r5.getid(4);
         System.out.println(r5.setid());
        
    }
}