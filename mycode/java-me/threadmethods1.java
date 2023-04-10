import java.util.*;
import java.lang.Thread;
public class threadmethods1{
    public static void main(String args[]){
        try{
            for(int i=1; i<=500; i++){
                Thread.sleep(80);
                System.out.println(i);
        }
    }
    catch(Exception e){
        System.out.println(e);
    }
}
}