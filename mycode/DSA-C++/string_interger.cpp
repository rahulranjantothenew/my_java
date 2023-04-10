#include<iostream>
using namespace std;
void checkinteger(string arr,int n){
    int temp=0;
     for(int i=0; i<n; i++){
        if(arr[i]==1 || arr[i]==2 || arr[i]==3 || arr[i]==4 || arr[i]==5){
             temp=temp+arr[i];
             arr[i]=arr[i+1];
             n--;
        }
        for(int j=0; )
     }
}
int main(){
    string arr="a,4,b,3,a,c,5 b";
    int n=arr.size();
    return 0;
}