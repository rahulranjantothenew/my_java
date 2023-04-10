#include<iostream>
using namespace std;
void febbenaccoseries(int n){
    int n1=0,n2=1;
    cout<<n1<<" "<<n2<<" ";
    for(int i=2; i<n; i++){
        int n3=n1+n2;
        cout<<n3<<" ";
        n1=n2; 
        n2=n3;
    }
}
int main(){
    int n;
    cout<<"enter no==";
    cin>>n;
    febbenaccoseries(n);
    return 0;
}