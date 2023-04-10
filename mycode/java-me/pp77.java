import java.util.*;
public class pp77{
    public static void main(String args[]){
     Scanner sc=new Scanner(System.in){
      System.out.print("enter patern");
       int n=sc.nextInt();
        
        
        for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            System.out.print("*");
        }
        for(int j=1; j<= 2 * (n-i); j++){
            System.out.print(" ");
        }
        for(int j=1; j<=i; j++){
            System.out.print("*");
        }
        
        System.out.println("");
        }
        for(int k=1; k<=n; k++){
            for(int l=1; l<=(n-k); l++){
                System.out.print("*");
            }
            for(int l=1; l<= 2 * k; l++){
                System.out.print(" ");
            }
            for(int l=1; l<= (n-k); l++){
                System.out.print("*");

            }
            System.out.println();
        } 
        

    }
  }
}
 