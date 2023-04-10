#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no=";
    cin>>n;
    int rem;
    while(n>0){
        rem=n%10;
        cout<<"ur digit is="<<rem<<endl;
        n=n/10;
    }
    return 0;
    
}
