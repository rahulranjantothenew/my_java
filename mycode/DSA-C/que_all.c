#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct quew{
    int size;
    int front;
    int rear;
    int *arr;
};
struct quew *creatememory(int capacity){
    struct quew *n=(struct quew *)malloc(sizeof(struct quew));
    n->size=capacity;
    n->front=n->rear=-1;
    n->arr=(int *)malloc(n->size * sizeof(int));
    return n;
}
int isempty(struct quew *q){
    if(q->front==q->rear){
        return 1;
    }else{
        return 0;
    }
}
int isfull(struct quew *q){
    if(q->rear==q->size-1){
        return 1;
    }else{
        return 0;
    }
}
void enque(struct quew *q,int data){
    if(isfull(q)){
        printf("your que is full\n");
    }else{
        q->rear++;
        q->arr[q->rear]=data;

    }
}
void deque(struct quew *q){
    if(isempty(q)){
        printf("\n\tyour queue is empty\n");
    }else{
        int d=q->arr[q->front+1];
        printf("\n\t\t your dequeu element is %d",d);
        q->front++;


    }
}
void display(struct quew *q){
    if(isempty(q)){
        printf("\t\t you quew is empty\n");
    }else{

    for(int i=q->front+1; i<q->rear+1; i++){
        printf("\n\t\tyou element in index %d is-%d",i,q->arr[i]);
    }
    }
}
int lengthofque(struct quew *q){
    if(isempty(q)){
       printf("\n\tyour queue is empty\n");
    }else{
        return((q->rear+1)-(q->front+1));
    }
}
void deleteindex(struct quew *q,int indx){
    if(isempty(q)){
        printf("\n\t\tyour quew is empty\n");
    }else{
        for(int i=indx; i<q->rear+1; i++){
         q->arr[i]=q->arr[i+1];
        }
        q->rear--;
    }

}
void deleteque(struct quew *q){
    if(isempty(q)){
        printf("\n\t\t your queue is already empty\n");
    }else{
        q->front=q->rear=-1;
    }
}

int main(){
    int ch;
    int n1;
    int indx;
            struct quew *sp=creatememory(20);
    while(1){
        printf("\n1.for inque:");
        printf("\n2.for display:");
        printf("\n3.for delete or deque:");
        printf("\n4.for exit");
        printf("\n5.for length of your queue");
        printf("\n6.for delete in any index");
        printf("\n7.for delete your queue");
        printf("\n\tPLEASE ENTER YOUR RESPONCE=");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            printf("ENTER DO YOU WANT TO ENQUE = =");
            scanf("%d",&n1);
            enque(sp,n1);
            break;
            case 2:
            display(sp);
            //printf("\n this function is commig soon\n");
            break;
            case 3:
            deque(sp);
            //printf("\n thsis function is commng soon\n");
            break;
            case 4:
            exit(0);
            break;
            case 5:
            printf("\n\t\tthe length of your queue is=%d",lengthofque(sp));
            break;
            case 6:
            printf("\n\tPLEASE ENTER THE INDEX WHERE YOU WANT TO DELETE =");
            scanf("%d",&indx);
            printf("\n\t\tyour deletation queue in index=%d",indx);
            deleteindex(sp,indx);
            printf("\n");
            display(sp);
            break;
            case 7:
            deleteque(sp);
            printf("\n\t\t your queue is deleted........THANK YOU BY BY\n");
            break;
            default:
            printf("\n\t\tINVALID OPTION YOUR ARE CHOSING PLZZ CONTECT RAHUL RANJAN\n");
            break;
        }
    }
    return 0;
}
