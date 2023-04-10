#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
NODE *start =NULL;
//start = NULL;
void insBegining(int item){
    NODE *n;
    n=(NODE*)malloc(sizeof(NODE));
    n->data=item;
    if(start==NULL){
        n->next=NULL;
    }
    else{
        n->next=start;
    }
    start=n;
}
void displayList(){
NODE *temp;
temp=start;
if(start==NULL){
 printf("\n list is empty");
}
else{
while(temp!=NULL){
    printf("%d",temp->data);
    temp=temp->next;
}
}
}

void main()
{
    int choice, item;
   // clrscr();
    
    do
    {
        //clrscr();
      printf("\n********************");
      printf("\n*******************");
     printf("\n********menu********");
     printf("\n**********************");
    
    printf("\n1. insert in begining");
    printf("\n2. INSERT AT SPECIFIC POSITION ");
    printf("\n3. INSET AT END");
    printf("\n4. DELETE FORM  BEGNING");
    printf("\n5. DELETE FORM SPECIFIC POSITON ");
    printf("\n6. DELETE AT END");
    printf("\n7. SEARCH ON ITEM");
    printf("\n8. DISPLAY THE LIST");
    printf("\n9. EXIT");
    printf("\n*************************");
    printf("\n INPUT YOUR CHOICE=");
    scanf("%d",&choice);
    switch(choice){
        case 1: printf("INPUT THE NODE DATA:");
               scanf("%d",&item);
               insBegining(item);
               getch();
               break;
        case 2:
           break;
        case 3:
           break;
        case 4:
           break;
        case 5:
           break;
        case 6:
           break;
        case 7:
           break;
        case 8: 
        displayList();
         getch();
           break;

    }
    }while(choice!=9);
}