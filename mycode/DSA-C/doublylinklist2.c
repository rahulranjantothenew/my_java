#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *displaylink(struct node *head){
    struct node *ptr=head;
    do{
        printf("\t\telement:=%d",ptr->data);
        printf("\n");
          ptr=ptr->next;
    }while(ptr!=NULL);
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
    head->prev=NULL;
    head->data=11;
    head->next=second;
    second->prev=head;
    second->data=22;
    second->next=third;
    third->prev=second;
    third->data=33;
    third->next=fourth;
    fourth->prev=third;
    fourth->data=44;
    fourth->next=NULL;
    displaylink(head);

    return 0;
}