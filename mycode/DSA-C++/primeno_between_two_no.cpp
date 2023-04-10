#include<iostream>
using namespace std;
void primeno(int n1,int n2){
    while(n1<=n2){
    int count=0;
    for(int i=2; i*i<=n1; i++){
        if(n1%i==0){
            count++;
            break;
        }
    }
    if(count==0){
        cout<<n1<<" ";
    }
    n1++;

    }
}
int main(){
    int n1,n2;
    cout<<"enter 1st no==";
    cin>>n1;
    cout<<"enter 2nd no=";
    cin>>n2;
    primeno(n1,n2);
    return 0;
}