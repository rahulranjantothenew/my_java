import java.util.*;
public class rahulranjan{
    public static void main(String args[]){
       int n=20;
        
      
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