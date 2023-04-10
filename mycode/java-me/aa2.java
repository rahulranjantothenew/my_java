import java.util.*;
public class aa2{
    public static void ar(int app[],int n){
        for(int i=0; i<n; i++){
            System.out.println(app[i]+" ");
            return;
        }


    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.print("enr no=");
        int n=sc.nextInt();
        int app[]=new int[n];
        for(int i=0; i<n; i++){
        app[i]=sc.nextInt();
        }
        ar(app[i],n);
        
    }
}