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
struct node *insertatfirst(struct node *head,int data){
  struct node *ptr=(struct node *)malloc(sizeof(struct node));
  ptr->data=data;
  ptr->next=head;
  return ptr;
}

int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    //allocate memory
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    head->data=22;
    head->next=second;
    second->data=66;
    second->next=third;
    third->data=88;
    third->next=fourth;
    fourth->data=99;
    fourth->next=NULL;
    linklisttraversal(head);
    head=insertatfirst(head,77);
    printf("\n");
    linklisttraversal(head);
    return 0;
}