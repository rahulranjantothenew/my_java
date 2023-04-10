#include<iostream>
using namespace std;
void swapNum(int &x,int &y){
    int z=x;
    x=y;
    y=z;
}
int main(){
    int a,b;
    cout<<"enter 1st no=";
    cin>>a;
    cout<<"enter 2nd no=";
    cin>>b;
    //cout<<"before swap:\n"
    //cout<<a<<b<<"\n"
    swapNum(a,b);
  cout<<"swaping after\n a="<<a<<"\nb="<<b<<endl;
}