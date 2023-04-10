import java.util.*;
public class buble{
    public static void printArray(int arr[],int n){
       for(int i=0; i<arr.length; i++){
        System.out.print(arr[i]+" ");
       }
       System.out.println();
   }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter no of array=");
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0; i<n; i++){
            arr[i]=sc.nextInt();
        }

        //int arr[]={7,9,3,1,2};
       
        for(int i=0; i<arr.length-1; i++){
            for(int j=0; j<arr.length-i-1; j++){
                if(arr[j] > arr[j+1]){
                    int temp;
                   
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1] = temp;
                    
    

                }
               

            }
        }
        
        printArray(arr);
        
    }
}