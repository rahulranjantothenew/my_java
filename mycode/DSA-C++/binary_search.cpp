#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int find){
    int low=0;
   int high=n-1;
    int mid=(low+high)/2;
    while(low<=high){
     if(arr[mid]==find){
        return mid;
        else if(arr[mid]<find){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    }
    return -1;
}
int main(){
    int n;
    cout<<"enter the length of array=";
    cin>>"n";
    int arr[100];
    for(int i=0; i<n; i++){
        cout<<"enter the index ",i);
        cin>>arr[i];
    }
    int find;
    cout<<"enter the array do you want to =";
    cin>>find;
    if(binarysearch(arr,n,find)>=0){
        cout<<"ur index in "<<binarysearch(arr,n,find)<<endl;
    }else{
        cout<<"your array is not present. sorry plese try again"<<endl;
    }
    
    return 0;
}