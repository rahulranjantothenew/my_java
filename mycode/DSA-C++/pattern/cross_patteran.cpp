#include<iostream>
using namespace std;
void crosspatteran(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
             cout<<" ";
        }
        for(int k=1; k<=2*n-i; k++){
            if(k==1 || k==2*n-2*i+1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    //------------
    for(int p=1; p<=n; p++){
        for(int j=n-p; j>=1; j--){
             cout<<" ";
        }
        for(int k=1; k<=2*n-1; k++){
            if(k==1 || k==2*p-1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter size=";
    cin>>n;
  crosspatteran(n);
    return 0;
}