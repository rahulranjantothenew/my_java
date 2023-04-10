#include<iostream>
using namespace std;
void replacearray(int arr[],int n){
    for(int i=0; i<n-1; i+=2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
     for(int j=0; j<n; j++){
        cout<<arr[j]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter length==";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"inter --"<<i<<"==";
        cin>>arr[i];
    }
    replacearray(arr,n);
}