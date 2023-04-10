#include<iostream>
#include<stdlib.h>
using namespace std;
void setfunction(char arr[],int n){
    int temp=0;
    for(int i=0; i<n; i++){
    //    if(arr[i]==1 || arr[i]==2 || arr[i]==3){
    //        temp=temp+arr[i];
    //        n--;
    //    }
    if(isdigit(arr[i])){
        temp+=arr[i];
        n--;
    }
           for(int j=i; j<n; j++){
             if(arr[i]==arr[j]){
                arr[j]=arr[j+1];
             n--;
             }
           }
    }
    for(int k=0; k<n; k++){
        cout<<arr[k]<<" ";
    }
    cout<<temp;


     cout<<"\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
   char arr[20];
   int n;
   cout<<"enter the length==";
   cin>>n;
   for(int l=0; l<n; l++){
    cout<<"enter=";
    cin>>arr[l];
   }

   setfunction(arr,n);
   //displayarray(arr,n);
    return 0;
}