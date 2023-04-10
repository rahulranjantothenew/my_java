#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter series length=";
    cin>>n;
    if(n==1){
        cout<<"0"<<endl;
    }else if(n==2){
        cout<<"0,1"<<endl;
    }else{
        int f,a=0,b=1,i=3;
        cout<<a<<" "<<b<<" ";
        while(i<=n){
            f=a+b;
            cout<<f<<" ";
            a=b;
            b=f;
            i++;
        }
    }
return 0;
}