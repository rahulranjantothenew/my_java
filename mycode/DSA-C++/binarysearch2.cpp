#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int find){
    int low,high,mid;
    low=0;
    high=n-1;
    
    while(low<=high){   

    mid=(low+high)/2;
    if(arr[mid]==find){
        return mid;
    }else if(arr[mid]<find){
        low=mid+1;
    }else{
        high=mid-1;
    }
    }
    return -1;
}
int maint(){
    int n;
    cout<<"enter the length of array=";
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++){
     cout<<"enter the index of arry="<<i;
     cin>>arr[i];
    }
    int find;
    cout<<"enter the array do u want to search here="<<endl;
    cin>>find;
    if(binarysearch(arr,n,find)>=0){
        cout<<"the index or your array is="<<binarysearch(arr,n,find);
    }else{
        cout<<"ur aray is not present here.please try again"<<endl;
    }
    
    return 0;
}