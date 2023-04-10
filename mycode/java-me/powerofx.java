import java.util.*;
public class powerofx{
    public static int p2(int x,int n){
        if(n==0){
            return 1;
        }
        if(x==0){
            return 0;
        }
        //int t=p2(x,n-1);
       // int u=x *t;
        return x* p2(x,n-1);
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.print("enter x=");
        int x=sc.nextInt();
        System.out.print("enter n=");
        int n=sc.nextInt();
        System.out.println(p2(x,n));
    }
}