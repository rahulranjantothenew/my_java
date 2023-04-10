import java.util.*;
class arrayall{
  public void inputarry(int arr[],int n){
  Scanner sc=new Scanner(System.in);
  // int arr[]=new int[n];   //this is wrong
    for(int i=0; i<n; i++){
      System.out.printf("enter the index of=%d=",i);
      arr[i]=sc.nextInt();
    }
  }
  public void printarray(int arr[], int n){
    //int arr[]=new int[n];
    for(int i=0; i<n; i++){
      System.out.printf("\nyour array in index=%d and valude =%d",i,+arr[i]);
    }
  }
}
public class arraytoall{
  public static void main(String args[]){
    Scanner sc=new Scanner(System.in);
   arrayall obj=new arrayall();
    int chh=1;
    int n;
    int arr[]=new int[100];
    
    
    while(chh!=0){
      System.out.println("\n1.for inter array");
      System.out.println("2.for print your array array");
      System.out.println("3.for max and min array");
      System.out.print("enter your responce=");
      int ch=sc.nextInt();
      switch(ch){
        case 1:
          System.out.print("enter the length of array=");
          n=sc.nextInt();
          obj.printarray(arr,n);
          obj.inputarry(arr,n);
          //inputarry(arr,n);
          //printarray(arr,n);
            //System.out.print("this function is cooming soon");
            break;
            case 2:
            System.out.print("enter the length of array=");
            n=sc.nextInt();
            obj.printarray(arr,n);
            //printarray(arr,n);
            //System.out.print("this function is cooming soon");
            break;
            default:
            System.out.print("this function is coming soon\n");
            break;
          }
        }
      }
}
      
