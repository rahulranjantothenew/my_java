#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int size;
    int *arr;
};
int isfull(struct stack *sp){
    if(sp->top==sp->size-1){
        return 1;
   // printf("\n the size of =%d",sp->arr);
    }
}
int isempty(struct stack *sp){
    if(sp->top==-1){
        return 1;
    }
}
void push(struct stack *sp,int val){
    if(isfull(sp)==1){
        printf("your stack is full");
    }else{
        sp->top++;
        sp->arr[sp->top]=val;
    }
}
void peek(struct stack *sp){
    if(isempty(sp)==1){
        printf("\nyour stack is empty");
    }else{
       for(int j=0; j<sp->top+1; j++){
        printf("%d ",sp->arr[j]);
       }
    }
}
int main(){
    struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
    sp->top=-1;
    sp->size=20;
    sp->arr=(int *)malloc(sp->size*sizeof(int));
        int n;
        int ch;
    while(1){
        printf("\n1. for push");
        printf("\n2. for peek");
        printf("\nenter your responce=====");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
           printf("\nenter the value do you want ot push=");
           scanf("%d",&n);
           push(sp,n);
            break;
        case 2:
        peek(sp);
        break;
        case 3:
         exit(0);
        break;
        
        default:
        printf("\nINVALID ENTERED");
            break;
        }
    }
   
    return 0;
}