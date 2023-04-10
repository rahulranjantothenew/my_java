#include<stdio.h>
#include<stdlib.h>
struct quelinklist{
    int data;
    struct quelinklist *next;
};
struct quelinklist *start=NULL;
struct quelinklist *last=NULL;
struct quelinklist *creatmemory(){
    struct quelinklist *n=(struct quelinklist *)malloc(sizeof(struct quelinklist));
    return n;
}
int isempty(){
    if(start==NULL){
        return 1;
    }else{
        return 0;
    }

}
int isfull(){
    struct quelinklist *f=creatmemory();
    if(f==NULL){
        return 1;
    }else{
        return 0;
    }

}
void enque(int val){
        struct quelinklist *ptr=creatmemory();
    if(start==NULL){
        ptr->data=val;
         start=ptr;
         last=ptr;
         ptr->next=NULL;
    }else{
        last=start;
        while(last->next!=NULL){
            last=last->next;
        }
        ptr->data=val;
        last->next=ptr;
        last=ptr;
        ptr->next=NULL;
    }
}
void display(){
    if(isempty()){
        printf("\n\t\tyour quelinklist is empty\n");
    }else{
        last=start;
        while(last!=NULL){
            printf("\n\t\t your quelinklist is=%d",last->data);
            last=last->next;
        }
    }
}
void dequelast(){
    if(start->next==NULL){
        start=NULL;
    }else{
         struct quelinklist *t;
    t=start;
    while(t->next->next!=NULL){
        t=t->next;
    }
    t->next=NULL;
    last=t;

    }
   

}
void dequebeg(){
    struct quelinklist *f;
    f=start;
    if(start->next==NULL){
      start=NULL;
    }else{
        start=start->next;
        free(f);
    }

}
int main(){
    int ch;
    int d;
    creatmemory();
    struct quelinklist *sp;
    while(1){
        printf("\n1.for inque\n");
        printf("2.for display\n");
        printf("3.for deque for last\n");
        printf("4.for exit\n");
        printf("5.for deque from begining\n");
        printf("\n\t please enter your responce==");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            printf("enter the value of dou your want to ensert ===");
            scanf("%d",&d);
            enque(d);
            break;
            case 2:
            display();
            break;
            case 3:
            dequelast();
            break;
            case 4:
            exit(0);
            break;
            case 5:
            dequebeg();
            break;
            default:
            printf("invalid option you are choosing\n");
            break;

        }
    }
    return 0;
}