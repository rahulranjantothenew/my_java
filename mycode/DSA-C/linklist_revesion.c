#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
    int info;
    struct node *link;
};
struct node *START=NULL;
struct node* createNode(){
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    return n;
}
void insertNode(){
    struct node * temp, *t;
    temp=createNode();
    printf("enter the node=");
    scanf("%d",&temp->info);
    temp->link=NULL;
    if(START==NULL){
        START=temp;
    }else{
        t=START;
        while(t->link!=NULL)
        t=t->link;
        t->link=temp;
    }
}
void deleteNode(){
    struct node *r;
    if(START==NULL){
        printf("teh list is remply");
    }else{
        r=START;
        START=START->link;
        free(r);
    }

}
void viewList(){
    struct node *t;
    if(START==NULL){
        printf("list is empty\n");

    }else{
        t=START;
        while(t!=NULL){
            printf("%d",t->info);
            printf(" ");
            t=t->link;
        }
    }
}
int menu(){
    int ch;
    printf("\n1.add node=");
    printf("\n2.delete firist=");
    printf("\n3.view list=");
    printf("\n4.exit=");
    printf("\nenter your choice=");
    scanf("%d",&ch);
    return (ch);
}
void main(){
    while(1)
    {
       //clrscr();
        switch(menu()){
            case 1:
            insertNode();
            break;
            case 2:
            deleteNode();
            break;
            case 3:
            viewList();
            break;
            case 4:
            exit(0);
            default:
            printf("invailid\n");
        }
            getch();
    }
}