import java.util.*;
public class trycatch1{
    public static void main(String args[]){


    int a=6000;
    int b=0;                    
try{                        //with try matlb try kro kyu nhi hoga divided
    int c=a/b;
    System.out.println("the result is"+c);
}
catch(Exception e){
    System.out.println("we failed to divide.Reason: ");
    System.out.println(e);                               //exception print hoga issse
}
System.out.println("End of the program");

}
}