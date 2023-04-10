#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void displaylinklist(struct node *ptr){
    while(ptr!=NULL){
        printf("element:-%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node *insertbegining(struct node *head,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
    return ptr;

}
struct node *insertanyindex(struct node *head,int data,int index){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;

   
}
struct node *insertend(struct node *head,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    ptr->data=data;
    ptr->next=NULL;
    p->next=ptr;
    return head;

        

    
}

int main(){
struct node *head;
struct node *second;
struct node *third;
struct node *fourth;
head=(struct node *)malloc(sizeof(struct node));
second=(struct node *)malloc(sizeof(struct node));
third=(struct node *)malloc(sizeof(struct node));
fourth=(struct node *)malloc(sizeof(struct node));
head->data=1;
head->next=second;
second->data=2;
second->next=third;
third->data=3;
third->next=fourth;
fourth->data=4;
fourth->next=NULL;
displaylinklist(head);
printf("\n");
//head=insertbegining(head,77);
//printf("insert in begining\n");
//printf("after insertion any index\n");
printf("after insertion any end index\n");
//head=insertanyindex(head,99,3);
head=insertend(head,99);
displaylinklist(head);

    return 0;
}