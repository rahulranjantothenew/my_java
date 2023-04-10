#include<iostream>
using namespace std;
int suum(int a,int b);


int main(){
    int num1,num2;
    cout<<"enter 1st no=";
    cin>>num1;
    cout<<"enter 2nd no=";
    cin>>num2;
    cout<<"the sum of ur no="<<suum(num1,num2);
    return 0;

}
int suum(int a,int b){
    int c=a+b;
    return c;
}