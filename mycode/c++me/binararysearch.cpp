#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n;
  while(s<=e){
        int mid=((s+n)/2);
    if(arr[mid]==key){
        return mid;
        
    }
    else if(arr[mid]>key){
        e=mid-1;

    }
    else{+-206
        s=mid-1;
    }
  }
  return -1;

}
int main(){
    int n;
    cout<<"enter the length=";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"enter array=";
        cin>>arr[i];
    }
    int f;
    cout<<"enter the finding key=";
    cin>>f;
    cout<<binarysearch(arr,n,f);
 >
 ./ ,mn `qwegf876`vcxz