#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int element){
    int low,mid,high;
    low=0;
    high=size-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==element){
            return mid;
        }
        if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,3,45,66,68,88,99};
    int size=sizeof(arr)/sizeof(int);  //checking size of array
    int element=45;
    //int searchindex=binarysearch(arr,size,element);
    cout<<"the elemet of="<<binarysearch(arr,size,element);
    return 0;
}