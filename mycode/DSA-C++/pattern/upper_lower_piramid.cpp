#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the length==";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<"* ";
        }
        cout<<endl;

    }
    for(int l=1; l<=n; l++){
        for(int p=1; p<=l+1; p++){
            cout<<" ";
        }
        for(int m=n; m>l; m--){
            cout<<"* ";
        }
        cout<<endl;

    }
    return 0;
}