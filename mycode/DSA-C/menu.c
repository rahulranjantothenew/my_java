#include<stdio.h>
#include<conio.h>
int main(){
    int ch;
    while(1){
    printf("1.for input\n");
    printf("2.for deletaton\n");
    printf("enter your responce ==");
    scanf("%d",&ch);
        switch(ch){
        case 1:
        printf("\n\t\tlund\n");
        break;
        case 2:
        printf("\n\tarrun bsdk\n");
        break;
        default:
        printf("\t\t\tglat dal rhe ho bsdk\n");
        break;
    }
    }
    return 0;
}