#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
    int input;
    struct node *link;
};
void displaylink(struct node *head){
    struct node *p=head;
    do{
        printf("element:=%d",p->input);
        printf("\n");
        p=p->link;

    }
    while(p!=head);
}
int main(){
       while(1){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    int ch;
    printf("\n\n*************************************************menu******************************************************\n");
    printf("1.display the circulat link list\n");
    printf("2.intsert the begnining in circulat link list\n");
    printf("3.insert any index in circular list list\n");
    printf("4.insert the end in circulst linklist\n");
    printf("5.delete the begining in circular linklist\n");
    printf("6.delete in any index in circulat linklist\n");
    printf("7.delete the end in circular linklist\n");
    printf("8.multiple insert in multiple index in circular link list\n");
    printf("9.delete in multiple in multiple index\n");
    printf("10. for exit\n");
    printf("enter your choice do you want to above=========================================");
    scanf("%d",&ch);
    switch (ch){
            case 1:
            //printf("this option is comint sooon please wait\n");
            head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    fifth=(struct node *)malloc(sizeof(struct node));
    //head->input=1;
    printf("\nenter the frist node=");
    scanf("%d",&head->input);
    head->link=second;
    //second->input=2;
    printf("\nenter the second node=");
    scanf("%d",&second->input);
    second->link=third;
    //third->input=3;
    printf("\nenter the third node=");
    scanf("%d",&third->input);
    third->link=fourth;
   // fourth->input=4;
   printf("\nenter the forth node=");
   scanf("%d",&fourth->input);
    fourth->link=fifth;
    //fifth->input=5;
    printf("\nenter the fifte node=");
    scanf("%d",&fifth->input);
    fifth->link=head;
    displaylink(head);
             break;
    
            case 2:
            printf("this option is comint sooon please wait\n");
             break;
            case 3:
            printf("this option is comint sooon please wait\n");
             break;
            case 4:
            printf("this option is comint sooon please wait\n");
             break;
            case 5:
            printf("this option is comint sooon please wait\n");
             break;
            case 6:
            printf("this option is comint sooon please wait\n");
             break;
            case 7:
            printf("this option is comint sooon please wait\n");
             break;
            case 8:
            printf("this option is comint sooon please wait\n");
             break;
            case 9:
            printf("this option is comint sooon please wait\n");
             break;
            case 10:
           // printf("this option is comint sooon please wait\n");
           exit(0);
             break;
             default:
             printf("invilid choice      please contect rahul ranjan\n");
             }
       getch();
       }
    

   

    return 0;
        
}