#include<stdio.h>
#include<stdlib.h>
struct que{
    int data;
    struct que *next;
};
struct que *start=NULL;
int isempty(){
    if(start==NULL){
        return 1;
    }
}
int isfull(){
    struct que *n=(struct que *)malloc(sizeof(struct que));
    if(n==NULL){
        return 1;
    }else{
        return 0;
    }

}
void enque(int value){
    if(start==NULL){
    struct que *ptr=(struct que *)malloc(sizeof(struct que));
    ptr->data=value;
    ptr->next=NULL;
    start=ptr;
    }else{
        struct que *ptr1;
        ptr1=start;
        while(ptr1->next!=NULL){
            ptr1=ptr1->next;
        }
        struct que *temp=(struct que *)malloc(sizeof(struct que));
        temp->data=value;
        ptr1->next=temp;
        temp->next=NULL;
    }
}
void pop(){
    if(start==NULL){
        printf("\nyour quelinklist is empty");
    }else{
        printf("\n\t\tdeleted element =%d",start->data);
        start=start->next;
    }
}

void peek(){
    if(isempty()==1){
        printf("\nyour que linklist is empty");
    }else{
        struct que *p=start;
        printf("\t\t");
        while(p!=NULL){
            printf("%d ",p->data);
            p=p->next;
        }

    }
}
int main(){
    int ch,n;
    while(1){
        printf("\n1.for enque");
        printf("\n2.for peek");
        printf("\n3.for pop");
        printf("\nenter your responce====");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("\nenter value do you want to insert==");
            scanf("%d",&n);
            enque(n);
            break;
        case 2:
        peek();
        break;
        case 3:
        pop();
        break;
        
        default:
        printf("\nINVALID input");
            break;
        }
    }
    return 0;
}
