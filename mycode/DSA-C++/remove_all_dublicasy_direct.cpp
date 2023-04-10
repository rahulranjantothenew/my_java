#include<iostream>
using namespace std;
void remove1(int arr[],int n){
    for(int i=0; i<n; i++){
        int temp=arr[i];
        for(int j=i+1; j<n; j++){
           if(temp==arr[j]){
                arr[i]=-1;
                arr[j]=-1;
            }
        }
    }
    for(int k=0; k<n; k++){
        if(arr[k]!=-1){
            cout<<arr[k]<<" ";
        }
    }
}
int main(){
   int arr[]={2,2,2,1,6};
   int n=sizeof(arr)/sizeof(int);
    remove1(arr,n);
}