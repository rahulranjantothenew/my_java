#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the length of ==";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=n; j>i; j--){
            cout<<" ";
        }
        for(int k=1; k<n*2; k++){
            if(k==1 || i==n || k==i*2-1){
                cout<<"*";
            }else{

            cout<<" ";
            }

        }
        cout<<endl;
    }
  
    return 0;
}