import java.util.*;
public class pp8{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.print(" dlo bhiy pahla=");
        int n=sc.nextInt();
        System.out.print("dalo chachha dusara=");
        int m=sc.nextInt();
        //int m=30;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n-i+1; j++){
            System.out.print(" ");
            }
            for(int j=1; j<=m; j++){
                System.out.print("*");
            }
            System.out.println();

        }
    }
}