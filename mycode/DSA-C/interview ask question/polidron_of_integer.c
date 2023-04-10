#include<stdio.h>
int rev=0;
int polidron(int n){
    while(n!=0){
     int rem=n%10;
     rev=rev*10+rem;
     n=n/10;
    }
    return rev;
}
int main(){
    printf("enter the integer==");
    int n;
    scanf("%d",&n);
    if(n==polidron(n)){
        printf("\nit is polidrom");
    }else{
     printf("\nit is n0t polidrom");
    }
    return 0;
}