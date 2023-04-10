#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter ur no=";
    cin>>n;
    bool flag=true;
    for(int i=2; i<=n; i++){
        if(n%i==0){
            flag=false;
            break;

        }
    }
    if(n<=1){
        flag=false;
    }
    if(flag){
        cout<<"prime\n";
    }else{
        cout<<"not prime\n";
    }
    return 0;
}
