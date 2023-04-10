#include<iostream>
using namespace std;
void funn1(int arr[],int n){
     for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
        if(arr[i]==arr[j]){
           for(int k=j; k<n; k++){
            arr[k]=arr[k+1];
           }
           n--;
           j--;
           for(int p=i; p<n; p++){
            arr[p]=arr[p+1];
           }
           n--;
           i--;
        }
    }

   }  
   for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
   }
}
int main(){
   int arr[]={1,2,3,4,5,1,3};
   int n=sizeof(arr)/sizeof(int);
  funn1(arr,n);
   return 0;

}