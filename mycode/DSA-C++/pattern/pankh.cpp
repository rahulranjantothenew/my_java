#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no=";
    cin>>n;
    int t=n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
          while(t!=2){
             cout<<" ";
          }
         t=2;
        // for(int k=n; k>=t; k--){
        //  cout<<" ";
        // }
         for(int l=1; l<=i; l++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}