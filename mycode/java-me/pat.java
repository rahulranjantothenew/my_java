import java.util.*;
public class pat
{
    public static void main(String args[]){
        int n=10;
        int m=50;
        for(int i=1; i<=10; i++){
            for(int j=1; j<=50; j++){
                //System.out.print("*");
                if(i == 1 || j == 1 || i == n || j == m || i== 25 || j == 25 || i == 10 || j == 10 || i == 40 || j == 40){
                    System.out.print("*");
                }else{
                    System.out.print(" ");

                }
            }
            if(i ==5){
                System.out.print("*");
            }else{
                System.out.print(" ");
            }
            System.out.println(" ");
        }

    }
}