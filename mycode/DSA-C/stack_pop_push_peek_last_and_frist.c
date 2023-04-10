#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct stack{
    int size;
    int top;
    int * arr;
};
int isempty(struct stack* ptr){
    if(ptr->top==-1){
        return 1;
    }else{
        return 0;
    }
}
int isfull(struct stack* ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }else{
        return 0;
    }
}
void push(struct stack* tt,int val){
    if(isfull(tt)){
        printf("\nyour stack is overflow");
    }else{
        tt->top++;
        tt->arr[tt->top]=val;
    }

}
int pop(struct stack* pp){
    if(isempty(pp)){
        printf("your stack is underflow can not pop from the stack\n");
        return -1;
    }else{
        int val=pp->arr[pp->top];
        pp->top--;
        return val;

    }
}
int peek(struct stack* sp,int i){
      int n=sp->top-i+1;
      if(n<0){
          printf("\nthis is not available");
          return -1;
      }else{
          return (sp->arr[n]);
      }

}
int stacktop(struct stack* sp){
    if(isempty(sp)){
        printf("your stack is empty\n");
        return -1;

    }else{
        return (sp->arr[sp->top]);
    }

}
int stackbottom(struct stack* s){
    if(isempty(s)){
        printf("\nyour stack is empty");
    }else{
        return (s->arr[0]);
    }
}



int main(){
   struct stack *s=(struct stack *)malloc(sizeof(struct stack));
    //struct stack *s;
    s->size=20;
    s->top=-1;
    s->arr=(int *)malloc(s->size * sizeof(int));
    printf("\n\t stack has been created successfully\n");  
    push(s,22);
    push(s,44);
    push(s,66);
    push(s,88);
    push(s,110);
    
    //printf("\n\t\tyour pop value is=%d",pop(s));
    for(int j=1; j<=s->top+1; j++){
        printf("\nyour position %d and value=%d",j,peek(s,j));

    }
    printf("\n your top  stack is=%d", stacktop(s));
    printf("\n your bottom stack is =%d",stackbottom(s));
   
    return 0;
}
