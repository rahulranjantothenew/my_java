import java.util.*;

import javax.sql.rowset.spi.SyncResolver;
class phone1{
    //void on();
    System.out.println("haiiii");
}
class smartphone extends phone1{
    void run(){
        System.out.println("turning on.....");
    }
}
public class phone{
    public static void main(String args[]){
        smartphone obj8=new smartphone();
        obj8.on();
    }
}
