#include<iostream>
using namespace std;
int sumnatural(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
    sum =sum+i;  
    }
    return sum;
}
int main(){
    int a;
    cout<<"enter 1st no=";
    cin>>a;
    cout<<"sum of natural no="<<sumnatural(a);
    return 0;

}