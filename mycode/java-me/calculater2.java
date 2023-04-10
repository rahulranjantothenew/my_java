import java.util.*;
public class calculater2 {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.print("enter 1st no=");
        int a=sc.nextInt();
        System.out.print("enter 2nd no=");
        int b=sc.nextInt();
        System.out.print("enter the operater=");
        char ch=sc.next().charAt(0);
        switch(ch){
            case '+':
            System.out.printf("the sum of your no=%d",a+b);
            break;
            case '-':
            System.out.printf("subtract of your no=%d",a-b);
            break;
            default :
            System.out.println("invalid");
        }

    
    }
    
}
