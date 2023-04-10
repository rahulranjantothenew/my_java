#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node *link;
};
struct node *start=NULL;

struct node *createnode(){
    struct node *n=(struct node *)malloc(sizeof(struct node));
    return n;
}
void inputnode(){
struct node *temp,*t;
temp=createnode();
printf("\nenter the value of node=");
scanf("%d",&temp->value);
temp->link=NULL;
if(start==NULL){
  start=temp;
}else{
    t=start;
    while(t->link!=NULL){
     t=t->link;
    }
    t->link=temp;

}
}


void displaylink(){
    struct node *r;
    if(start==NULL){
        printf("\t\tyou link list is empty\n");

    }else{
        r=start;
        while(r!=NULL){
            printf("\n\t\t\t\telement:=%d",r->value);
            //printf("\n");
            r=r->link;
        }


    }
}
void deletelink(){
    struct node *t;
    if(start==NULL){
        printf("you link list is empty \n");

    }else{
        t=start;
        start=start->link;
        free(t);
    }
}

void deleteendlink(){
    struct node *r;
    struct node *q;
    if(start==NULL){
        printf("your liklist is empty\n");
    }else{
        r=start;
        q=start->link;
        while(q->link!=NULL){
          r=r->link;
          q=q->link;

        }
        r=r->link=NULL;
        free(q);
    }
}
void insertbegninig(){
    struct node *t;
    struct node *m;
   //temp=createnode();
   t=(struct node *)malloc(sizeof(struct node));
        printf("inter the node do you want to insert in begining=");
        scanf("%d",&t->value);
    if(start==NULL){
        start=t;
        t->link=NULL;

    }else{
        m=start;
        t->link=m;
        start=t;   //ye karna jarury kyu ki aage ka operation start se hoga
        
        
        //return r;

    }

}
void insertend(){
    struct node *ptr=createnode();
    struct node *p;
    printf("enter the node do you want to insert=");
    scanf("%d",&ptr->value);
    if(start==NULL){
        start=ptr;
        ptr->link=NULL;
        printf("sorry your previes node is not available then i am not adding to end . i am adding to start position now\n");
    }
    else{
        p=start;
        while(p->link!=NULL){
             p=p->link;
        }
        ptr->link=NULL;
      //p=ptr;
      p->link=ptr;
       
    }
    
}

struct node *insertspecial(struct node *start,int index){
    struct node *sp=createnode();
    struct node *p;
    //int data;
    printf("\nenter the value of node=");
    scanf("%d",&sp->value);

     if(start==NULL){
        start=sp;
        sp->link=NULL;
        printf("sorry your previes node is not available then i am not adding to end . i am adding to start position now\n");
        return start;
    }
    else{
        p=start;
        int i=0;
        while(i!=index-1){
            p=p->link;
        }
        sp->link=p->link;
        p->link=sp;
        return start;
    }
}
int searchlinklist(){
    struct node *p;
    int n;
    printf("\nthe the node do you want to search here =");
    scanf("%d",&n);
    if(start==NULL){
        printf("your linklist is empty\n");
    }
    else{
        p=start;
        while(p->link!=NULL){
        if(p->value==n){
            //printf("yes your link list is here    .........................................\n");
            return 1;
            break;
        }
          p=p->link;
            
        }
        return -1;
    }
}
void swaplinklist(){
    //struct node *swap;
    struct node *sw;
    if(start==NULL){
        printf("\n\t\tYOUR LINK LIST IS EMPTY\n");
    }else{
       struct node *prevnode,*currentnode, *nextnode;
       prevnode=NULL;
       currentnode=nextnode=start;
       while(nextnode!=NULL){
           nextnode=nextnode->link;
           currentnode->link=prevnode;
           prevnode=currentnode;
           currentnode=nextnode;

       }
       start=prevnode;

    }
}
void deleteduplicate(){
    struct node *current=NULL;
    struct node *currentinner=NULL;
    struct node *duplicate=NULL;
    current =start;
    while(current!=NULL && current->link!=NULL){
        currentinner=current;
        while(currentinner->link!=NULL){
            if(current->value==currentinner->link->value){
                duplicate=currentinner->link;
                currentinner->link=currentinner->link->link;
                free(duplicate);
            }else{
                currentinner=currentinner->link;
            }
        }
        current=current->link;
    }
}

int main(){
    while(1){
        int ch;
        int index;
       printf("\t\n\n***********************************************  menu  **********************************\n");
       printf("1. for input the linklist\n");
       printf("2. for display the linklist\n");
       printf("3. for delete from begnining linklist\n");
       printf("4. delete form the end\n");
       printf("5. for exit\n");
       printf("6. insert from the begining\n");
       printf("7. insert from the end\n");
       printf("8. insert for specific index\n");
       printf("9. insert for search linklist\n");
       printf("10. reverse  your linklist\n");
       printf("11. delete duplicate in your linklist\n");
       printf("please enter your choide=");
       scanf("%d",&ch);
      switch (ch){
           case 1:
           inputnode();
           break;
           case 2:
            displaylink();
           break;
           case 3:
           deletelink();
           //printf("this option is comming soon/n");

           break;
           case 4:
           deleteendlink();
           //printf("this option is comming soon/n");

           break;

           case 5:
           exit(0);
           //printf("this option is comming soon/n");
           break;

           case 6:
           insertbegninig();
           break;
           case 7:
           insertend();
           break;
           case 8:
           if(start==NULL){
               insertspecial(start,0);
           }else{
                printf("\ninter the index where do you want to insert=");
                scanf("%d",&index);
                insertspecial(start,index);
           }
          
           break;
            case 9:
           if(searchlinklist()>=0){
               printf("YES YOUR LINK LIST IS HERE \n");
           }else{
               printf("SORRY YOUR LINK LIST IS NOT HRERE!!!!!!!!!!!!!!!!! PLEASE TRY AGAINn");
           }
           break; 
            case 10:
           swaplinklist();
            displaylink();
           break;
            case 11:
            deleteduplicate();
           // printf("\n\t\tthis option is comming soon/n");
           break;

           default:
           printf("\n\n\tINVALID OPTION----------------------PEASE CONTECT RAHUL RANJAN\n");
           break;
       }
       //getch();
    

    }
    return 0;
}