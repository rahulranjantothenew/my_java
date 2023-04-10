#include<iostream>
using namespace std;
int main(){
    char input,alpa='A';
    cout<<"enter capital latter ==";
    cin>>input;
    for(int i=1; i<=(input-'A'+1); i++){
        for(int j=1; j<=i; j++){
            cout<<alpa<<" ";
        }
            alpa++;
        cout<<endl;
    }
    return 0;

}