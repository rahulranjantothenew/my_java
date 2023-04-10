#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
    int info;
    struct node *link;

};
struct node *START=NULL;
struct node *createnode{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    return temp;

}
void inputlinklist(){
    struct node *head;
    head=createnode();
    printf("enter the node=");
    scanf("%d",&head->info);
    head->link=NULL;
    

}
void displaylinklist(struct node *ptr){
    while(ptr!=NULL){
        printf("element:=%d",ptr->info);
        ptr=ptr->link;
    }
}
int main(){
    int ch;
    printf("1.insert node=");
    printf("2.disply node=");
    printf("please inter the option=");
    scanf("%d",&ch);
    switch(ch){
        while(1){
            case 1:
        inputlinklist(head);
        break;
        case 2:
        displaylinklist();
        break;
        default:
        printf("invalid option you are choiceing\n");
        break;

        }
        getch();
        
    }

    return 0;
}