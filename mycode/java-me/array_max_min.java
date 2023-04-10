import java.util.*;
public class array_max_min {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n;
        int max=0;
        int min=0;
        System.out.print("enter the length of array=");
        n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0; i<n; i++){
            System.out.printf("enter intex of=%d=",i);
            arr[i]=sc.nextInt();

        }
        for(int i=0; i<n; i++){
            System.out.printf("the index of=%d=%d",i,arr[i]);
            System.out.println();
        }
        max=arr[0];
        min=arr[0];
        for(int i=0; i<n; i++){
          if(max<arr[i]){
                max=arr[i];
            }else if (min>arr[i]) {
                min=arr[i];
                
            }

        }
        System.out.println("maximum no of this array=" +max);
        System.out.println("maximum no of this array=" +min);
    }
    
}
