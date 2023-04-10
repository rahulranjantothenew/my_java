import java.util.*;
class thisuse{
    int x;
    public int getx(){
        return x;
    }
    thisuse(int x){
   this.x=x;
    }
    public static void main(String args[]){
        thisuse ob=new thisuse(6);
        System.out.println(ob.getx());
    }
}

