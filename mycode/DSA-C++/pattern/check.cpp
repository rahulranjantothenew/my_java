#include<iostream>
using namespace std;
void funn(){
    cout<<"hello bro";
}
int funn(int b){
    cout<<"hiii";
    return b;
}
int main(){
   funn();
   cout<<funn(10);
    return 0;
}