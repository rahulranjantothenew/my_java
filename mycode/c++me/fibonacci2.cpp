#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the length of the series=";
    cin>>n;
    if(n==1){
        cout<<"0"<<" ";
    }else if(n==2){
        cout<<"0"<<" "<<"1"<<" ";
    }else{
        int curr,a=0,b=1,i=3;
        cout<<"0"<<" "<<"1"<<" ";
        while(i<=n){
            curr=a+b;
            a=b;
            b=curr;
            cout<<curr<<" ";
         i++;
        }
    }
    return 0;
}