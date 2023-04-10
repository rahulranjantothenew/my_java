#include<stdio.h>
int rec(int n){
    if(n>0){
        printf("%d ",n);
        rec(n-1);
        //rec(n-1);
        printf("%d ",n);
    }
}
int main(){
   rec(3);
    return 0;
}