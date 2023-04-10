#include<stdio.h>
#include<conio.h>
int binarysearch(int arr[],int n,int low,int high,int indx){
    int mid=(low+high)/2;
    if(low>high){
        return -1;
    }
if(arr[mid]==indx){
    return mid;
}
if(low<=high){
    if(arr[mid]<indx){
        binarysearch(arr,n,mid+1,high,indx);
    }else{
         binarysearch(arr,n,low,mid-1,indx);
    }
}
}
int main(){
    int arr[]={2,6,8,9};
    int n=sizeof(arr)/sizeof(int);
    printf("your arary is=%d",binarysearch(arr,n,0,n-1,9));
    return 0;
}