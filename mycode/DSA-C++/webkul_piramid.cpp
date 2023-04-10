#include<iostream>
using namespace std;
void piramid(int n){
    for(int i=1; i<=n; i++){
        int temp=2*i-1;
        if(temp>n+2){
            continue;
        }else{

        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=2*i-1; k++){
            cout<<"e";
        }
        cout<<"\n";
        }
    }
    //2222222222222222
     for(int i=1; i<n; i++){
        int temp1=2*i-1;
        if(temp1>n){
            continue;
        }else{

        for(int j=1; j<=i; j++){
            cout<<" ";
        }
        for(int k=n; k>=2*i-1; k--){
            cout<<"e";
        }
        cout<<"\n";
        }
    }
}
int main(){
    int n;
    cout<<"enter no=";
    cin>>n;
    if(n%2==0){
        cout<<"enter again=";
        cin>>n;
    }
    cout<<"\n";
    piramid(n);
}