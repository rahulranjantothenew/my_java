import java.util.*;
public class ssum {
    public static int calculateSum(int a,int b) {
        int sum=a+b;
        System.out.println("ur sum=" +sum);
        return 0;
    }
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
        System.out.print("enter 1st value=");
        int a=sc.nextInt();
        System.out.print("enter 2nd no=");
        int b=sc.nextInt();
       // System.out.println("ur sum=" +sum);
        calculateSum(a,b); 
    }
}

