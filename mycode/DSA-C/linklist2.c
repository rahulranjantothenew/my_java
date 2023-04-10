#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int input;
    struct node *link;
};
void displaylinklist(struct node *ptr){
    while(ptr!=NULL){
        printf("element:=%d\n",ptr->input);
        ptr=ptr->link;
    }
}
int main(){

/*
struct node *head;
struct node *second;
struct node *third;
struct node *fourth;
head=(struct node *)malloc(sizeof(struct node));
second=(struct node *)malloc(sizeof(struct node));
third=(struct node *)malloc(sizeof(struct node));
fourth=(struct node *)malloc(sizeof(struct node));
printf("enter the frist linklist=");
scanf("%d",&head->input);
head->link=second;
printf("\nenter the frist linklist=");
scanf("%d",&second->input);
second->link=third;
printf("\nenter the frist linklist=");
scanf("%d",&third->input);
third->link=fourth;
printf("\nenter the frist linklist=");
scanf("%d",&fourth->input);
fourth->link=NULL; 
*/

int n;
int ti=0;
struct node ti;
printf("enter the length of linklist=");
scanf("%d",&n);
for(int i=0; i<n; i++){

    struct node *ti;
}
    
for(int i=0; i<n; i++){
    ti=(struct node *)malloc(sizeof(struct node));
    printf("enter the linklist of index= %d-",i);
    scanf("%d",&ti->input);
    }
    displaylinklist(ti);
   // t=struct node *n-1;



    return 0;
}
