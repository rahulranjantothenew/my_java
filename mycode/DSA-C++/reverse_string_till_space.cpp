#include<iostream>
using namespace std;
void reversestring(string str){
    int n=str.size();
        int t=n;
     for(int i=n; i>=0; i--){
        if(str[i]==' '){
            for(int j=i; j<t; j++){
                cout<<str[j];
            }
            t=i;
        cout<<" ";
        }
        if(i==0){
            for(int j=i; j<=t; j++){
                cout<<str[j];
            }
            t=i-1;
        cout<<" ";
        }
    }
}
int main(){
char str[50];
cout<<"enter==";
gets(str);
reversestring(str);
return 0;
}