#include<stdio.h>
    int k=1;
int factorialof(int n){
    if( n>0 ){
    k=n*factorialof(n-1);

    }
    return k;

    
}
int main(){
    int n;
    printf("enter element==");
    scanf("%d",&n);
    printf("\nfactorial==%d",factorialof(n));
    return 0;
}