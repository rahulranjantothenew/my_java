#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
    int data;
    struct node *link;
};
struct node *start=NULL;
struct node *creatememory(){
    struct node *n=(struct node *)malloc(sizeof(struct node));
    return n;
}
int isempty(){
    if(start==NULL){
        printf("\n\tyour linklist stack is empty\n");
        return 0;
    }else{
        return -1;
    }
}
int isfull(){
    struct node *p=(struct node *)malloc(sizeof(struct node));
    if(p==NULL){
        printf("\n\tyour linklist stack is full\n");
        return 0;
    }else{
        return -1;
    }
}
void push(){
       struct node *ptr=creatememory();
      // struct node *ptr=(struct node *)malloc(sizeof(struct node));
        printf("\nENTER THE VALUE OF DO YOU WANT TO ENTER=");
        scanf("%d",&ptr->data);
       //if(!isfull()){
        ptr->link=start;
        start=ptr;
      //}
}
void peek(){
    if(start==NULL){
        printf("\n\t\t\tyour stack is empty\n");
    }else{
        struct node *pt;
        pt=start;
        while(pt!=NULL){
            printf("\n\t\t\tyour linklist stack is=%d",pt->data);
            pt=pt->link;
        }
    }
} 
/*void peek(){
    if(!isempty){
        struct node *pt;
        pt=start;
        while(pt!=NULL){
            printf("\n\t\t your stack is%d=",pt->data);
            pt=pt->link;
        }
    }
} */
void pop(){
    if(start==NULL){
        printf("\n\tyour stack is empty\n");
    }else{
        struct node *p=start;
        start=start->link;
        printf("\n\t\t\tyour pop element=%d",p->data);
        free (p);
    }
}
void viewtop(){
    if(start==NULL){
        printf("\n\t\tyour stack is empty\n");
    }else{
        printf("\n\t\tyour top stack is =%d",start->data);
    }
}
void viewend(){
    struct node *n=start;
    if(start==NULL){
        printf("\n\n\t\tyour stack is empty\n");
    }else{
        while(n->link!=NULL){
            n=n->link;
        }
        printf("\n\t\t\tyour last stack is =%d",n->data);
    }
}
int main(){
    int ch,n;
    struct node *sp;
    creatememory();
   while(1){
    printf("\n********************************     MENU    ****************************************************************************************\n");
    printf("1.for push or input linklist stack\n");
    printf("2.for peek or display linklist stack\n");
    printf("3.for pop you linklist stack\n");
    printf("4.for view top on your linklist stack\n");
    printf("5.for last view of your linklist stack\n");
    printf("6.for exit you linklist stack\n");
    printf("\t\t\tENTER YOUR RESPONCE DO YOU WANT TO OPRATION HERE=");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        push();
        //printf("this function is comming soon\n");
        break;
        case 2:
        peek();
        //printf("this function is comming soon\n");
        break;
        case 3:
        pop();
        //printf("this function is comming soon\n");
        break;
        case 4:
        viewtop();
       // printf("this function is comming soon\n");
        break;
        case 5:
        viewend();
       // printf("this function is cooming soon\n");
        break;
        case 6:
        exit(0);
        break;
        default:
        printf("\n\t\tOHHO!!!INVALID OPTION .PLEASE CONTECT RAHUL RANJAN....THANK YOU!!\n");
        break;
    }
   }

    return 0;
}