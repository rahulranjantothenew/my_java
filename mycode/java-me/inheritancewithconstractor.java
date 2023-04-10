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
   
}
class st5 extends st4 {
    String clas;
    public void getclas(String k){
     this.clas=k;
    }
    public String setclas(){
        return clas;
    }
    st5(){
        name="ranjan";
        id=12;
        clas="mca";
    } 

}


public class inheritancewithconstractor{
    public static void main(String args[]){
        st5 r5=new st5();
       // r5.getname("ram");
        System.out.println("the name of ur="+r5.setname());
        //r5.getid(4);
         System.out.println("ur id is=" +r5.setid());
         System.out.println("the neme of ur class="+r5.setclas());

        
    }
}