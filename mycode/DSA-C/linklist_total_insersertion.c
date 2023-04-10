#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
    int data;
    struct node *next;
};
    void displaylink(struct node *ptr){
     while(ptr!=NULL){
        printf("elemet:%d\n",ptr->data);
       ptr=ptr->next;
      }
    } 
    struct node *insertbegining(struct node *head,int data){
        struct node *ptr=(struct node *)malloc(sizeof(struct node));
        ptr->data=data;
        ptr->next=head;
        //ptr=ptr->next;   ye glti kre the
        return ptr;
    } 

    struct node *insertbetween(struct node *head,int data,int index){
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
       // ptr=ptr->next;
        return head;
    } 
    struct node *insertend(struct node *head,int data){
        struct node *ptr=(struct node *)malloc(sizeof(struct node));
        ptr->data=data;
        struct node *p=head;
        while(p->next!=NULL){
            p=p->next;
        }
        ptr->next=NULL;
        p->next=ptr;
        return head;
    }
    struct node *deletelink(struct node *head){
        //struct node *ptr=(struct node *)malloc(sizeof(struct node));   issme memory allocte nhi krna hai kyu ki delation hoga
        struct node *ptr=head;
        head=head->next;
        free(ptr);
        return head;
    }
    struct node *deletebetween(struct node *head,int index){
        struct node *p=head;
        struct node *ptr=head->next;
        int i=0;
        while(i!=index-1){
            p=p->next;
            ptr=ptr->next;
            i++;
        }
    
        p->next=ptr->next;
        free(ptr);
        return head;
    }
    struct node *deleteend(struct node *head){
        struct node *p=head;
        struct node *ptr=head->next;
        while(ptr->next!=NULL){
            p=p->next;
            ptr=ptr->next;

        }
        p->next=NULL;
        free(ptr);
        return(head);

    } /*
    struct node *createnode(){
        struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    return n;
    }
    void insertnode(){
        struct node *head;
        head=createnode();
        printf("enter the node=");
        scanf("%d",head->data);
        head->next=NULL;
         while(head->next!=NULL)
        head=head->next;
        //head->next=next;
    } */
    void revercelinklist(){



        
    }
        
    
int main(){
    while(1){
         int operater;
    printf("***************************   menu  of rahul  ****************************************************\n");
    printf("1. display your linklist\n");
    printf("2. insert linklist in begining\n");
    printf("3. insert linklist in any index \n");
    printf("4. insert linklist in between\n");
    printf("5. insert linklist in end\n");
    printf("6. deletation linklist from begning\n");
    printf("7. deletation linklist from any index\n");
    printf("8. deletation linklist from between\n");
    printf("9. deletation linklist from end\n");
    printf("10. multiple insertion form choice index\n");
    printf("11 multiple deletation from choice index\n");
    printf("12 insertion and deletion both are available BUT only one index\n");
    printf("13.for reverse");
    printf("please chose do you want to operation here=");
    scanf("%d",&operater);
    printf("\n");
    switch (operater){
        
           struct node *head;
           struct node *second;
           struct node *third;
           struct node *fourth;

        case 1:
       
           head=(struct node *)malloc(sizeof(struct node));
           second=(struct node *)malloc(sizeof(struct node));
           third=(struct node *)malloc(sizeof(struct node));
           fourth=(struct node *)malloc(sizeof(struct node));
           //head->data=1;
           printf("enter your fist node=");
           scanf("%d",&head->data);
           head->next=second;
          // second->data=2;
           printf("enter your second node=");
           scanf("%d",&second->data);
           second->next=third;
           //third->data=3;
            printf("enter your third node=");
           scanf("%d",&third->data);
           third->next=fourth;
          // fourth->data=4;
           printf("enter your fourth node=");
           scanf("%d",&fourth->data);
           fourth->next=NULL;
           displaylink(head);
           break; 

        case 2:
          //printf("this facility is coming soon plese wait\n");
           head=(struct node *)malloc(sizeof(struct node));
           second=(struct node *)malloc(sizeof(struct node));
           third=(struct node *)malloc(sizeof(struct node));
           fourth=(struct node *)malloc(sizeof(struct node));
           /*head->data=11;
           head->next=second;
           second->data=22;
           second->next=third;
           third->data=33;
           third->next=fourth;
           fourth->data=44;
           fourth->next=NULL; */
            //head->data=1;
           printf("enter your fist node=");
           scanf("%d",&head->data);
           head->next=second;
          // second->data=2;
           printf("enter your second node=");
           scanf("%d",&second->data);
           second->next=third;
           //third->data=3;
            printf("enter your third node=");
           scanf("%d",&third->data);
           third->next=fourth;
          // fourth->data=4;
           printf("enter your fourth node=");
           scanf("%d",&fourth->data);
           fourth->next=NULL;
           printf("without inserting the begining\n");
           displaylink(head);
           printf("enter the begning data=");
           int data=0;
           scanf("%d",&data);
           head=insertbegining(head,data);
           printf("after the inserting the begining\n");
           printf("rahul \n");
           displaylink(head);
           break;

        case 3:
           head=(struct node *)malloc(sizeof(struct node));
           second=(struct node *)malloc(sizeof(struct node));
           third=(struct node *)malloc(sizeof(struct node));
           fourth=(struct node *)malloc(sizeof(struct node));
           head->data=111;
           head->next=second;
           second->data=222;
           second->next=third;
           third->data=333;
           third->next=fourth;
           fourth->data=444;
           fourth->next=NULL;
           printf("without inserstion inserstion\n");
           displaylink(head);
           printf("\n");
           head=insertbetween(head,1,3);
           printf("after inserstion\n");
           displaylink(head);
            break;

        case 4:
           printf("this facility is coming soon plese wait\n");
           break;

        case 5:
          //printf("this facility is coming soon plese wait\n");
           head=(struct node *)malloc(sizeof(struct node));
           second=(struct node *)malloc(sizeof(struct node));
           third=(struct node *)malloc(sizeof(struct node));
           fourth=(struct node *)malloc(sizeof(struct node));
           head->data=2;
           head->next=second;
           second->data=4;
           second->next=third;
           third->data=6;
           third->next=fourth;
           fourth->data=8;
           fourth->next=NULL;
           printf("without insetion\n");
           displaylink(head);
           printf("\n");
           head=insertend(head,10);
           printf("after insertion\n");
           displaylink(head);
           break;

        case 6:
           //printf("this facility is coming soon plese wait\n");
           head=(struct node *)malloc(sizeof(struct node));
           second=(struct node *)malloc(sizeof(struct node));
           third=(struct node *)malloc(sizeof(struct node));
           fourth=(struct node *)malloc(sizeof(struct node));
           head->data=3;
           head->next=second;
           second->data=6;
           second->next=third;
           third->data=9;
           third->next=fourth;
           fourth->data=12;
           fourth->next=NULL;
           printf("your linklist\n");
           displaylink(head);
           head=deletelink(head);
           printf("\n");
           printf("your linklist is after deletion\n");
           displaylink(head);
           break;

        case 7:
           //printf("this facility is coming soon plese wait\n");
           head=(struct node *)malloc(sizeof(struct node));
           second=(struct node *)malloc(sizeof(struct node));
           third=(struct node *)malloc(sizeof(struct node));
           fourth=(struct node *)malloc(sizeof(struct node));
           head->data=4;
           head->next=second;
           second->data=8;
           second->next=third;
           third->data=12;
           third->next=fourth;
           fourth->data=16;
           fourth->next=NULL;
           printf("your linklist\n");
           displaylink(head);
           head=deletebetween(head,2);
           printf("\n");
           printf("after delation\n");
           displaylink(head);
           break;

        case 8:
           printf("this facility is coming soon plese wait\n");
           
            break;
        case 9:
           //printf("this facility is coming soon plese wait\n");
            head=(struct node *)malloc(sizeof(struct node));
           second=(struct node *)malloc(sizeof(struct node));
           third=(struct node *)malloc(sizeof(struct node));
           fourth=(struct node *)malloc(sizeof(struct node));
           head->data=5;
           head->next=second;
           second->data=10;
           second->next=third;
           third->data=15;
           third->next=fourth;
           fourth->data=20;
           fourth->next=NULL;
           printf("your linklist\n");
           displaylink(head);
           head=deleteend(head);
           printf("\n");
           printf("after deletion\n");
           displaylink(head);
           break;

        case 10:
           printf("this facility is coming soon plese wait\n");
           break;
        case 11:
           printf("this facility is coming soon plese wait\n");
           break;
        case 12:
           printf("this facility is coming soon plese wait\n");
           break;
        case 13:
           //printf("this facility is coming soon plese wait\n");
           revercelinklist();

           break;
        default:
           printf("invaild number you are entered .please try again");
        break;
    
    }
    //return 0;
    getch();

    }
   
}