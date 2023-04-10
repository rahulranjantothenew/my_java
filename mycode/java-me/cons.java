import java.util.*;
class cons{
    int x;
    public int getx(){
        return x;
    }
    cons(int x){
   this.x=x;
    }
}
class thisuse{
public static void main(String args[]){
    cons ob=new cons(65);
    System.out.println(ob.getx());
}
}