#include<iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    cout<<"enter digit =";
    cin>>n;
    while(i<=10){
        int t=n*i;
        cout<<t;
        cout<<"\n";
        i++;
    }
    return 0;
}