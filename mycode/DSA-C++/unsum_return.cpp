#include<iostream>
using namespace std;
int check(int arr[],int n){
    int t;
   for(int i=0; i<n-2; i++){
    for(int j=i+2; j<n; j++){
        if(arr[i]+arr[i+1]==arr[j]+arr[j+1]){
            t=j+3;
        }else{
            t=j;
        }
    }
   }
   return t+1;
}
int main(){
    int arr[]={1,3,0,2,2};
    int n=sizeof(arr)/sizeof(int);
    cout<<check(arr,n);
    return 0;
}