import java.util.*;
public class TwoD {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter rows=");
        int rows = sc.nextInt();
        System.out.print("enter columns=");
        int cols = sc.nextInt();
        int numbers [][]=new int[rows][cols];
        for(int i=0; i<rows; i++) {
            for(int j=0; j<cols; j++) {
                numbers[i][j] = sc.nextInt();
            }

        }
        System.out.print(" enter do u want to search=");
        int x = sc.nextInt();
        for(int i=0; i<rows; i++) {
            for(int j=0; j<cols; j++) {
                 System.out.print(numbers[i][j] + " ");
                if(numbers[i][j] == x) {
                   System.out.println();
                   // System.out.println();
                    System.out.println(" ur result= ("+ (i+1) + " , " + (j+1) + ")");
                }
              
            }
            System.out.println();
        }
       
    
  }
}