import java.util.*;
class A{
    public int revers1(int n){
        int rev=0;
        while(n!=0){
            int rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
        return rev;
    }
}

    public class reversdigit{
        public static void main(String args[]){
            Scanner sc=new Scanner(System.in);
            System.out.print("enter the ==");
            int n=sc.nextInt();
            A oj=new A();
            int m=oj.revers1(n);
           System.out.print("revers after="+m);
           
        }
    }

