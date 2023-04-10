#include<iostream>
using namespace std;
    int temp=0;
int sumfun(int n){
    if(n!=0)
    {
        temp+=n;
        sumfun(n-1);
    }
    return temp;

}
int main(){
    int n=25; 
    cout<<"sum==="<<sumfun(n);
    return 0;
}