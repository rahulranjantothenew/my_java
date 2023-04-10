#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
    int data;
    struct node *link;
};
struct node *start=NULL;
struct node *createnode(){
    struct node *n=(struct node *)malloc(sizeof(struct node));
    return n;
}
void inputlist(){
    struct node *ptr=createnode();
    struct node *curr;
    printf("\nenter=");
    scanf("%d",&ptr->data);
    ptr->link=NULL;
    if(start==NULL){
        start=ptr;
    }else{
     //start=curr;
     curr=start;
     while(curr->link!=NULL){
         curr=curr->link;
     }
     curr->link=ptr;
    }

}
void displaylink(){
    struct node *d;
    if(start==NULL){
        printf("\n\t\tlinklist is empty\n");
    }else{
        d=start;
        while(d!=NULL){
            printf("\n\telemtent:=%d",d->data);
            d=d->link;
        }
    }
}
void duplicate(){
   struct node *current=start;
   struct node *currentinner=NULL;
   struct node *duplicate;
   if(start==NULL){
       printf("\n\t\tyour linklist is empty\n");
   }else{
       while(current!=NULL && current->link!=NULL){
       currentinner=current;
       while(currentinner->link!=NULL){
             if(current->data==currentinner->link->data){
              duplicate=currentinner->link;
              //current->link=currentinner->link->link;
              currentinner->link=currentinner->link->link;
              free(duplicate);
          }else{
              currentinner=currentinner->link;
          }
       }
       current=current->link;
        
       }
   }
}
int main(){
int n;
while(1){
    printf("\n1.for input");
    printf("\n2.dispay");
    printf("\n3.delete duplicate");
    printf("\nresponce=");
    scanf("%d",&n);
    switch(n){
        case 1:
        inputlist();
        break;
        case 2:
        displaylink();
        break;
        case 3:
        duplicate();
        break;
        default:
        printf("\n\tinvalid");
        break;
    }
}
    return 0;
}