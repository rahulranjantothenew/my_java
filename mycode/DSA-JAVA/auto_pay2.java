import java.util.*;
public class auto_pay2{
    public static void sortnumber(int n){
        int origenal=n;
        int count=0;
        while(n>0){
          n=n/10;
          count++;
        }
        int arr[]=new int[count];
        for(int i=0; i<count; i++){
            int t=origenal%10;
            origenal=origenal/10;
            arr[i]=t;
        }
        for(int i=0; i<count-1; i++){
        for(int j=i+1; j<count; j++){
                if(arr[i]>arr[j]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
           
        }
        for(int k=0; k<count; k++){
            System.out.print(arr[k]);
        }
       
    }

public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("enter==");
    int n=sc.nextInt();
    sortnumber(n);
}
}
