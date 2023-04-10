#include<iostream>
using namespace std;
int main(){
int n1,n2;
char op;
cout<<"enter 1st no=";
cin>>n1;
cout<<"enter 2nd no=";
cin>>n2;
cout<<"enter operater=";
cin>>op;
switch (op){
    case '+':
    cout<<"the sum ur no="<<n1+n2<<endl;
    break;
    case '-':
    cout<<"the subtract no ur no="<<n1-n2<<endl;
    break;
    case '*':
    cout<<"the multiple or ur no="<<n1*n2<<endl;
    break;
    case '/':
    cout<<"the divide or ur no="<<n1/n2<<endl;
    break;
}


return 0;
}

