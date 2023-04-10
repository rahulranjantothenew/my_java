import java.util.*;
class revesersdigjava{
    public static int revers1(int n){
        int rev=0;
        while(n!=0){
            int rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
        return rev;
    }
    
   
        public static void main(String args[]){
            Scanner sc=new Scanner(System.in);
            System.out.print("enter the ==");
            int n=sc.nextInt();
            revesersdigjava oj=new revesersdigjava();
           // int m=oj.revers1(n);
           int m=revers1(n);
           System.out.print("revers after="+m);
           
        }
   
}