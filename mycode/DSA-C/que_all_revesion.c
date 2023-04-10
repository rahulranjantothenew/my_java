#include<stdio.h>
#include<stdlib.h>
struct que{
    int size;
    int front;
    int rear;
    int *arr;
};
//struct que *creatememory(){
    
  //  return n;
//}
int isempty(struct que *sp){
    if(sp->rear==sp->front){
        return 1;
    }
}
int isfull(struct que *sp){
    if(sp->rear==sp->size-1){
        return 1;
    }
}
void enque(struct que *sp,int val){
    if(isfull(sp)==1){
        printf("\nyour queue is full");
    }else{
        sp->rear++;
        sp->arr[sp->rear]=val;

    }
}
void displayenque(struct que *sp){
    if(isempty(sp)==1){
        printf("\nyour quequ is empty");
    }else{
        printf("\t\t");
        for(int i=sp->front+1; i<sp->rear+1; i++){
            printf("%d ",sp->arr[i]);
        }
    }
}
void deque(struct que *sp){
    int d=sp->arr[sp->front+1];
    if(isempty(sp)==1){
        printf("\n your que is empty");
    }else{
        printf("\n deque element is=%d",d);
        sp->front++;
    }
}
int main(){
   int ch,n;
    struct que *sp=(struct que *)malloc(sizeof(struct que));
    sp->size=20;
    sp->front=-1;
    sp->rear=-1;
    sp->arr=(int *)malloc(sp->size * sizeof(int));
   //struct que *sp=creatememory();
   while(1){
    printf("\n1.for enque");
    printf("\n2.display queue");
    printf("\n3.deque");
    printf("\nenter your responce===");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
       printf("\nenter the value do you want to ensert==");
       scanf("%d",&n);
       enque(sp,n);
        break;
    case 2:
    displayenque(sp);
    break;
    case 3:
    deque(sp);
    break;
    
    default:
    printf("\ninvalid input");
        break;
    }
   }

    return 0;
}