#include<iostream>
using namespace std;
int sum(int a,int b){
    int c=a+b;
    return c;

}
int main(){
    int a,b;
    cout<<"enter 1st digit";
    cin>>a;
    cout<<"enter 2nd no=";
    cin>>b;
    cout<<"sum of ur no="<<sum(a,b);
    return 0;

}