#include<iostream>
using namespace std;
void remove1(int arr0[],int arr1[],int n){
    for(int i=0; i<n; i++){
        int temp=arr0[i];
        for(int j=i+1; j<n; j++){
           if(temp==arr0[j]){
                arr1[i]=-1;
                arr1[j]=-1;
           }
        }
    }
    for(int k=0; k<n; k++){
        if(arr1[k]!=-1){
            cout<<arr0[k]<<" ";
        }
    }
}
int main(){
    int n;
    cout<<"enter the size of array==";
    cin>>n;
    int arr[n];
    int arr1[n];
    for(int i=0; i<n; i++){
      cout<<"enter= "<<i<<" =index= ";
      cin>>arr[i];
    }
    remove1(arr,arr1,n);
}