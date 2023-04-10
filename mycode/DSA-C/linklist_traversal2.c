#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void linklisttraversel(struct node *ptr){
    while(ptr!=NULL){
        
        printf("element:=%d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main(){
    int n;
    printf("enter the length of linklist=");
    scanf("%d",&n);
for(int i=0; i<n; i++){
    struct node *i;
}
    //struct node *head;
   // struct node *second;
   // struct node *third;
   / struct node *fourth;
    //allocate memory
    for(int i=0; i<n; i++){
        i=(struct node *)malloc(sizeof(struct node));
    }
    //head=(struct node *)malloc(sizeof(struct node));
    //second=(struct node*)malloc(sizeof(struct node));
   // third=(struct node*)malloc(sizeof(struct node));
   // fourth=(struct node*)malloc(sizeof(struct node));
   for(int i=0; i<n; i++){
       printf("enter the index=%d",i);
       scanf("%d",&i->data);
   }
    //head->data=11;
    //head->next=second;
    //second->data=44;
    //second->next=third;
    //third->data=55;
    //third->next=fourth;
    //fourth->data=88;
    n-1->next=NULL;
    linklisttraversel(head);
    return 0;
}