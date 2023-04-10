#include<stdio.h>
int reverse=0;
int  reverse_integer(int n){
     while(n!=0){
        int rem=n%10;
        reverse=reverse*10+rem;  
        n=n/10;
    }
    return reverse;
}
int main(){
    int n;
    printf("enter the integer==");
    scanf("%d",&n);
    printf("\nafter your given reversing==%d",reverse_integer(n));
    return 0;
}