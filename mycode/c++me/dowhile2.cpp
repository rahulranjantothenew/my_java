#include<iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    cout<<"enter no do u want to enter=";
    cin>>n;
    do{
        int t=n*i;
        cout<<t;
        cout<<"\n";
        i++;

    }while(i<=10);
    return 0;
}