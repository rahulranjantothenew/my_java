import java.util.*;
public class reverse{
    public static void printrev(String str,int idx) {
   if(idx==0){
        System.out.println(" ur string is-" +str.charAt(idx));
        return;
    } 
    System.out.print(str.charAt(idx));
    System.out.print(" , ");
    printrev(str,idx-1);
    }
    public static void main(String args[]){
        String str="abcd";
        printrev(str,str.length()-1);
    }
}