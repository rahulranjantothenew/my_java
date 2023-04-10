#include<iostream>
using namespace std;
int main(){
    int i=4,j=11,k=16;
    int r1[]={'&i', '&j', '&k'};
    cout<< *r1[*r1[1]-7];
    return 0;
}