#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the no==";
    cin>>n;
    int arr[20],temp=0,temp1=0;
    for(int i=0; i<=10; i++){
        arr[i]=pow(5,i);
        //cout<<temp<<endl;
    }
    for(int i=0; i<=10; i++){
         temp1=temp1+arr[i];
         if(temp1==n){
             cout<<"yes";
             break;
         }
        for(int j=i+1; j<=10; j++){
            if(arr[i]+arr[j]==n){
                cout<<"yes";
                break;
            }
            for(int k=j+1; k<=10; k++){
                if(arr[i]+arr[j]+arr[k]==n){
                    cout<<"yes";
                    break;
                }
            }
        }
    }
    return 0;
}