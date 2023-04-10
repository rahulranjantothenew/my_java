#include<stdio.h>
#include<stdlib.h>
struct stack{
    int data;
    struct stack *next;
};
struct stack *start=NULL;
int isempty(){
    if(start==NULL){
        return 1;
    }
}
int isfull(){
    struct stack *p=(struct stack *)malloc(sizeof(struct stack));
    if(p==NULL){
        return 1;
    }
}
struct stack *creatememory(){
    struct stack *n=(struct stack *)malloc(sizeof(struct stack));
    return n;
}
void push(int val){
    if(isfull()==1){
        printf("\nyour stacklinklist is full");
    }else{
        struct stack *ptr=creatememory();
        ptr->data=val;
        ptr->next=start;
        start=ptr;
       
    }
}
void peek(){
    if(isempty()==1){
     printf("\nYour stack linklist is empty");
    }else{
        struct stack *pt=start;
        while(pt!=NULL){
            printf("\n%d",pt->data);
            pt=pt->next;
        }
    }
}
void pop(){
    if(isempty()==1){
        printf("\n your stack linklist is empty");
    }else{
        struct stack *pt1=start;
        start=pt1->next;
    }
}


int main(){
struct stack *sp;
int ch,n;
while(1){
printf("\n1.for push");
printf("\n2.for peek");
printf("\n3.for pop");
printf("\nenter your responce====");
scanf("%d",&ch);
switch (ch)
{
case 1:
printf("enter value=");
scanf("%d",&n);
    push(n);
    break;
case 2:
peek();
break;
case 3:
pop();
break;

default:
printf("\ninvalid input");
    break;
}
}
    return 0;
}