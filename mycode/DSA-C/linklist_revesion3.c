#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
int main(){
    int ch;
    printf("1.insert node");
    printf("2.display node");
    printf("please enter your response==================================");
    scanf("%d",&ch);
    switch (ch){
        case 1:
        inputlinklist();
        break;
        case 2:
        displaylinklist();
        break;
        default:
        printf("\n\t\tinvalid input   ......please contect to rahul ranjan\n");
        break;
    }
}