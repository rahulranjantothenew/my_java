#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter no=";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"greatest no="<<a;

        }else{
            cout<<"greatest no="<<c;
        }
        
    }if(b>a){
        if(b>c){
            cout<<"greatest no="<<b;

        }else{
            cout<<"greatest no="<<  c;
        }
    }
    return 0;
}