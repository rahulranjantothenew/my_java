#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct quew{
    int size;
    int front;
    int rear;
    int *arr;
};
struct quew *creatememory(int cap){
    struct quew *n=(struct quew *)malloc(sizeof(struct quew));
    n->size=cap;
    n->front=0;
    n->rear=0;
    n->arr=(int *)malloc(n->size * sizeof(int));
    return(n);

}
int isempty(struct quew *sp){
    if(sp->front==sp->rear){
        return 1;
    }else{
        return 0;
    }
}
int isfull(struct quew *sp){
    if((sp->rear+1) % (sp->size)==sp->front){
        return 1;
    }else{
        return 0;
    }
}
void enqueue(struct quew *sp,int val){
    if(isfull(sp)){
        printf("your quew is full\n");
    }else{
        sp->rear=(sp->rear+1)%sp->size;
        sp->arr[sp->rear]=val;
    }
}
void deque(struct quew *sp){
    int p=0;
    if(isempty(sp)){
        printf("your queue is empty\n");
    }else{
        p=sp->arr[sp->front+1];
       printf("\n\t\t your dequeu element is =%d",p);
        sp->front=(sp->front+1) % sp->size;
    }
   // return  d;

}
void displayquew(struct quew *sp){
    if(isempty(sp)){
        printf("\t\tyour circular quew is empty\n");
    }else{
        for(int i=sp->front; i<sp->rear; i++){
            printf("\n\t\tyour element in index=%d and value =%d",i,sp->arr[i+1]);
        }
    }
}
int main(){
    int ch;
    int val;
    struct quew *sp=creatememory(10);
    while(1){
        printf("\n1.for enque\n");
        printf("2.for dispaly\n");
        printf("3.for dequeue\n");
        printf("4.for exit\n");
        printf("\t\tplease enter your responce==");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            printf("please enter the valude is=");
            scanf("%d",&val);
            enqueue(sp,val);
            //printf("this function is comming soon\n");
            break;
            case 2:
            displayquew(sp);
            //printf("this funcion is cooming soon\n");
            break;
            case 3:
            deque(sp);
            //printf("\n\t\t your dequeu element is =%d",deque(sp));
            //printf("this function is cooming soon\n");
            break;
            case 4:
            exit(0);
            break;
            default:
            printf("invaild plese check\n");
            break;

        }
    }
    return 0;
}