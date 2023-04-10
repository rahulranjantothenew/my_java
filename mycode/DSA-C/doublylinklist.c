#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node {
    int data;
    struct node *prev;
    struct node *next;

};
struct node *start=NULL;
struct node *creatememory(){
    struct node *n=(struct node *)malloc(sizeof(struct node));
    return n;
}
int isempty(){
    if(start==NULL){
       return 1;
    }else{
        return 0;
    }
}
void inputnode(int val){
    struct node *p;
    struct node *ptr=creatememory();
    if(start==NULL){
      ptr->prev=NULL;
      ptr->data=val;
      ptr->next=NULL;
      start=ptr;
    }else{
        p=start;
        while(p->next!=NULL){
            p=p->next;
        }
        ptr->next=NULL;
        ptr->data=val;
        ptr->prev=p;
        p->next=ptr;
        p=p->next;
    }

}
void display(){
         struct node *sp;
    if(isempty()){
        printf("\nyour doublylinklist is empty\n");
    }else{
         sp=start;
        do{
         printf("\n\t\t element:=%d",sp->data);
         sp=sp->next;
        }while(sp!=NULL); 
        
    }

}
int main(){
    int ch;
    int n;
    struct node *sp;
    creatememory();
    while(1){
        printf("\n1.for input\n");
        printf("2.display your doublylinklist\n");
        printf("3.for exit\n");
        printf("plese enter your responce=");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            printf("enter the no do you want to insert=");
            scanf("%d",&n);
            inputnode(n);
            break;
            case 2:
            display();
            break;
            case 3:
            exit(0);
            break;
            default:
            printf("invalid option you are chosing. please contect rajul ranjan\n");
            break;
        }

    }
    return 0;
}