#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter length==";
    cin>>n;
    for(int i=n; i>=1; i--){
        for(int j=i; j<=n; j++){
            cout<<" ";
        }
        for(int k=1; k<=i*2-1; k++){
            if(i==n || k==1|| k==2*i-1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}