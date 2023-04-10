import java.util.*;
public class ppp8{
    public static void main(String args[]){
        int n=40;
        int m=30;
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