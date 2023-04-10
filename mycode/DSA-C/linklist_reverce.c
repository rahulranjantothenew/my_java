#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *start=NULL;
struct node *createnode(){
    struct node *n=(struct node *)malloc(sizeof(struct node));
    return n;
}
void inputnode(){
    struct node *temp;
    struct node *t;
    temp=createnode();
    printf("\nenter the node=");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(start==NULL){
        start=temp;
    }else{
        t=start;
        while(t->link!=NULL){
          t=t->link;
        }
        t->link=temp;
    }
}
void displaylink(){
    struct node *ptr;
    if(start==NULL){
        printf("your linklist is empty\n");
    }else{
        ptr=start;
        while(ptr!=NULL){
            printf("element:%d",ptr->data);
            printf(" ");
            printf("\n");
            ptr=ptr->link;
        }
    }
}
void swaplinklist(){
    struct node *t1=NULL;
    struct node *t2=NULL;
    struct node *t3=start;
    if(start==NULL){
        printf("\n your node is empty");
    }else{
        
        while(start->link!=NULL){
            t2=start->link;
            start->link=t1;
            t1=start;
            start=t2;
            }
            start->link=t1;


        }

}
int main(){
   while(1){
          int ch;
          printf("\n1.input linklist");
           printf("\n2.display linklist");
           printf("\n3. for swap");
    printf("\nenter do you want to operation here=");
    scanf("%d",&ch);
    switch (ch){
        case 1:
        inputnode();
        break;
        case 2:
        displaylink();
        break;
        case 3:
        swaplinklist();
         displaylink();
        break;
        default:
        printf("invaild\n");
        break;
    }
   //   getch();

    
   }
    return 0;
}