#include<iostream>
using namespace std;
int main(){
    char op;
    cout<<"enter charecter do you want to enter=";
    cin>>op;
    switch (op){
        case 'a':
        cout<<"ur word is vowel"<<endl;
        break;
        case 'e':
        cout<<"ur word is vowel"<<endl;
        break;
        case 'i':
        cout<<"ur word is vowel"<<endl;
        break;
        case 'o':
        cout<<"ur word is vowel"<<endl;
        break;
        case 'u':
        cout<<"ur word is vowel"<<endl;
        break;
        default:
        cout<<"it is consonent"<<endl;
        break;
    }
    return 0;
}