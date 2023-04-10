#include<iostream>
using namespace std;
int sum(int a,int b){
    int c=a+b;
    return c;
}
int sum(int r,int s,int t){
 int d=r+s+t;
 return d;   
}
int main(){
    cout<<"the sum of two no="<<sum(3,4,9)<<endl;
    cout<<"the sum of three no="<<sum(2,5);
    return 0;
}