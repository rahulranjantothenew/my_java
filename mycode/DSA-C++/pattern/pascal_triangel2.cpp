#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the length==";
    cin>>n;
    int key=1;
    for(int i=0; i<n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=0; k<=i; k++){
            if(i==0 || k==0){
              key=1;
            }else{
                key=key*(i-k+1)/k;
            }
            cout<<key<<" ";
        }
        cout<<endl;

    }
    return 0;
}