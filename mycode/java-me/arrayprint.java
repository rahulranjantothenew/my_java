import java.util.*;
public class arrayprint{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.print("enter no=");
        int n=sc.nextInt();
        int ar[]=new int[n];
        for(int i=0; i<n; i++){
        
         ar[i]=sc.nextInt();
        }
        for(int i=0; i<n; i++){
        System.out.print(ar[i]+" ");
        }
    }
}

