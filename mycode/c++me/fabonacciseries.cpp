#include<iostream>
using namespace std;
int main() {
    int n,t1=0,t2=1;
    cout<<"enter series length=";
    cin>>n;
    cout<<"fibonacci series:";
    for(int i=1; i<=n; i++){
        if(i==1){
            cout<<t1<<",";
            continue;
        }
        if(i==2){
            cout<<t2<<",";
            continue;
        }
        int t3=0;
        t3=t1+t2;
        t1=t2;
        t2=t3;
        cout<<t3<<",";
    }
    return 0;
}