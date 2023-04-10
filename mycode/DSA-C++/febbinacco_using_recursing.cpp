#include<iostream>
using namespace std;
void febbinaccoseries(int n){
   static int n1=0,n2=1;
    if(n>0){
        int n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
        febbinaccoseries(n-1);
    }
}
int main(){
    int n;
    cout<<"enter length of no==";
    cin>>n;
    cout<<0<<" "<<1<<" ";
    febbinaccoseries(n-2);
    return 0;
}