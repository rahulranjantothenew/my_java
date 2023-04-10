#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    cout<<"enter 2 no till prime no=";
    cin>>n>>m;
    for(int num=n; num<=m; num++){
        int i;
    for(int i=2; i<num; i++){
        if(num%i==0){
            break;
        }
    }
    if(i==num){
        cout<<num<<endl;
    }
    }
    return 0;

}