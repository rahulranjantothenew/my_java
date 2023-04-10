#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter length or series=";
    cin>>n;
    if(n==1){
        cout<<"0"<<" "<<endl;
    }
    else if(n==2){
        cout<<"0"<<" "<<"1";

    }
    else{
        int curr,a=0,b=1,i=2;
        cout<<"0"<<" "<<"1"<<" ";
        while(i<n){
           curr=a+b;
           cout<<curr<<" ";
           a=b;
           b=curr;
           i++; 

        }
        return 0;

    }
}