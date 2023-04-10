#include<stdio.h>
#include<conio.h>
int main(){
    printf("\nenter the operater=");
    char op;
   scanf("%c", &op);
    printf("\nenter 1st no=");
    int a;
    scanf("%d",&a);
    printf("\nenter 2nd no=");
    int b;
    scanf("%d",&b);
    switch(op){
        case '+':
        printf("\nsum of your no=%d",a+b);
        break;
        case '-':
        printf("\nsubtract of your no=%d",a-b);
        break;
        default:
        printf("\ninvalid chossen");
        break;
    }
    return 0;
}