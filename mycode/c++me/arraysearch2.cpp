#include<iostream>
using namespace std;
int arraysearch(int arr[],int n,int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
    
}
int main(){
    int n;
    int k;
    cout<<"enter the size of array=";
    cin>>n;
    int arr[n];
   for(int i=0; i<n; i++){
        cout<<"enter"<<i<<"array=";
        cin>>arr[i];
    } 
    cout<<"enter the key =";
    cin>>k;
    if(arraysearch(arr,n,k)==1){
    cout<<arraysearch(arr,n,k)<<"-index of ur item";
    }else{
        cout<<"your enterd no is not in ur array";
    }
        
    
   
    return 0;
}