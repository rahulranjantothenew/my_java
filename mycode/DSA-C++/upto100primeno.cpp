#include<iostream>
using namespace std;
int main(){
    int n=2;
while(n<100){
    int count=0;
    for(int i=2; i<n; i++){
        if(n%i==0){
           count++;
           break;
        }
    }
    if(count==0){
        cout<<n<<" ";
    }
    n++;
}
    return 0;
}