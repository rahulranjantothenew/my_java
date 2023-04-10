import java.util.*; 

interface mycamera{        //interface class
    void takesnap();
    void recordvideo();
    
    private void greet(){  //  isko mysmartphone me use nhi kr skte hai or na hi public class me use kr skte hai.isse default class me use kr ke hi use kr skte hai
        System.out.println("good morning");
    }
    default void record4kvideo(){//default method ko savi me use krne ki jarurat nhi hai.jaise ki interface method ko karna hi padta hai.or iss over ride v kr skte hai
        greet();                  //sirf default me use kr ke use kr skte hai
        System.out.println("recording in 4k .....");
    }
}
interface mywifi{            //interface class
    String[] getnetworks();    //ye string arry hai
    void connecttonetwork(String network);
}
class mycellphone{       //class
    void callnumber(int phonenumber){
        System.out.println("calling"+phonenumber);
    }
    void pickcall(){
        System.out.println("conecting......");
    }
}
class mysmartphone extends mycellphone implements mywifi, mycamera{
    public void takesnap(){
        System.out.println("taking snap...");
    }
    public void recordvideo(){
        System.out.println("taking snap");
    }
    // public void record4kvideo(){           // override kr skte hai
        //System.out.println("taking snap and recoding in 4k");
    //}
    public String[] getnetworks(){
        System.out.println("getting list of networks");
        String[] networklist={"harry ,thaul kumar"};
        return networklist;
    }
    public void connecttonetwork(String network){
        System.out.println("connecting to"+network);
    }
}
public class inhertanceplusinterface{
    public static void main(String args[]){
        mysmartphone ms=new mysmartphone();
        ms.record4kvideo(); 
       // ms.greet();                    //isko direct nhi use kr skte kyu ki ye private hai
        String[] ar=ms.getnetworks();
        for(String item:ar){
            System.out.println(item);
        }
    }
}