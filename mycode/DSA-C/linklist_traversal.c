#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void linklisttraversal(struct node *ptr){
 while(ptr!=NULL){
     printf("element:%d\n",ptr->data);
     ptr=ptr->next;
 }
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
    head->data=7;
    head->next=second;
    second->data=11;
    second->next=third;
    third->data=44;
    third->next=fourth;
    fourth->data=77;
    fourth->next=NULL;
    linklisttraversal(head);
    return 0;
}