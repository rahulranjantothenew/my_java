import java.util.*;
public class factorialusingrecursion{
    public static void facc1(int n){
        if(n<0){
            System.out.println("invailid");
            return;
        }
        int fact=1;
        for(int i=n; i>=1; i--){
            fact=fact*i;
        }
            System.out.println(fact);
            return;
        

    }
    public static void main(String args[]){
        Scanner sc=new Scanner (System.in);
        System.out.println("enter n0=");
       int n=sc.nextInt();
       //int n=5;
        facc1(n);
    }
}