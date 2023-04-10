#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,3,1,4,1};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0; i<n; i++){
        int count=1;
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
                arr[j]=-1;
            }

        }
         if(arr[i]!=-1){
                cout<<arr[i]<<"="<<count<<endl;
        }
    }
}