#include<iostream>
using namespace std;
int main(){
   int arr[]={1,9,8,1,1,5,5,7,3,1,9,1,10,0,2};
   int n=sizeof(arr)/sizeof(int);
   for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
        if(arr[i]==arr[j]){
           for(int k=j; k<n; k++){
            arr[k]=arr[k+1];
           }
           j--;
           n--;
        }
         if(arr[i]>arr[j]){
            int temp=arr[i];
         arr[i]=arr[j];
            arr[j]=temp;
      }
    }

   }  
   for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
   }
   return 0;

}