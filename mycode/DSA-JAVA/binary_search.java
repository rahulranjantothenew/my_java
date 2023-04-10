class biniarr
{
    public static int binarySearch(int arr[],int low,int high,int indx)
    {
        int mid=(low+high)/2;
        if(low>high)
        {
            return -1;
        }
    if(arr[mid]==indx)
    {
        return mid;
    }
    if(low<=high)
    {
        if(arr[mid]<indx)
        {
            binarySearch(arr,mid+1,high,indx);
        }else
        {
             binarySearch(arr,low,mid-1,indx);
        }
    }
    

}

public class binary_search
{
public static void main(String args[])
{
        int arr[]={2,6,8,9};
       // int n=sizeof(arr)/sizeof(int);
       int n=arr.length;
       int s=binarySearch(arr,0,n-1,9);
        System.out.println("your arary is="+s);

    }
   
}