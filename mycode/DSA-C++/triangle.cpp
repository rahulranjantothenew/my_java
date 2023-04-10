#include<iostream>
using namespace std;
int main(){
    int n;
    int k=n;
    cout<<"enter size==";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=n-1; j>=i; j--){
            cout<<" ";
            for(int l=n; l>=1; l--){
                cout<<" ";
            }
        }
        cout<<"*";
        for(int l=i; l<=n; l++){
            cout<<" ";
        }
       
        cout<<endl;
    }
}