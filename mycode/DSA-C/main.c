#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;

};
void linklisttransversal(struct node *ptr){
    while(ptr!=NULL){
        printf("element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
/*//insert begin
struct node *insertbegin(struct node *head,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
} */
 //insert between
struct node *linklistinsertbetween(struct node *head,int data,int index){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    p->next=p->next;
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
    linklisttransversal(head);
    //head=insertbegin(head,77);

    //head=
    linklistinsertbetween(head,9,1);
     printf("\n");
    linklisttransversal(head);

    return 0;
}
