#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no==";
    cin>>n;
    int count=0;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            count++;
            break;
        }
    }
    if(count!=0){
        cout<<"it is not prime no"<<endl;
    }else{
        cout<<"it is prime no";
    }
    return 0;
}