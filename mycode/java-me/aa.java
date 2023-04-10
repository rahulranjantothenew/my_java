import java.util.*;
public class aa {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x=1;
        while(x!=0){
        System.out.print("inter 1st no=");
        int a = sc.nextInt();
        System.out.print("inter 2nd no=");
        int b = sc.nextInt();

        if (a == b) {
            System.out.println("equal");
        } else if (a > b){                     //yenha galt kiya tha 
             
                System.out.println("a is greater");
            } else {
                System.out.println("a is lesser");
            }
        }
    }
}