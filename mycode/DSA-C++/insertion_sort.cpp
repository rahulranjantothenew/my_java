#include<iostream>
using namespace std;
void insertionshort(int arr[],int n){
    for(int i=1; i<=n-1; i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

}
void disp(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={5,3,7,1,8,2};
    int n=sizeof(arr)/sizeof(int);
    insertionshort(arr,n);
    disp(arr,n);
    return 0;
}