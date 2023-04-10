import java.util.*;
class st1{
    String name;
    public void getname(String n){
       this.name=n;
    }
    public String setname() {
        return name;
  }
    }
    class st2 extends st1 {
        int id;
        public void getid(int m){
            this.id=m;
        }
        public int setid(){
            return id;
        }
    }
public class inheritance{
    public static void main(String args[]){
       // st1 r=new st1();
        st2 n1=new st2();
        n1.getname("rahul");
        System.out.println(n1.setname());
        n1.getid(2);
        System.out.println(n1.setid());

       
    }
}

