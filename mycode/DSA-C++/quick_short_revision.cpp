#include<iostream>
using namespace std; 
int finalgives(int arr[],int min,int max){
        int pivit=arr[min];
        int i=min+1;
        int j=max;
        do{
        while(pivit>=arr[i]){
            i++;
        }
        while(pivit<arr[j]){
            j--;
        }
         if(j>i){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
            
        }
        }while(i<j);
         int temp1=arr[min];
          arr[min]=arr[j];
          arr[j]=temp1;
       
       
        return j;
    }
void myfuction(int arr[],int low,int high){ 
    int return1; 
    if(low<high){
    return1=finalgives(arr,low,high);
    myfuction(arr,low,return1-1);  
    myfuction(arr,return1+1,high);  
    }
    }
void display(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
   int arr[]={7,1,3,4,6,0};
   int n=sizeof(arr)/sizeof(int);
   myfuction(arr,0,n-1);
   display(arr,n);

    return 0;
}