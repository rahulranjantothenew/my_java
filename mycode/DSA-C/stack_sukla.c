#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct arraystack{
    int size;
    int top;
    int* arry;
};
struct arraystack* createstack(int cap){
    struct arraystack *s=malloc(sizeof(struct arraystack));
    s->size=cap;
    s->top=-1;
    s->arry=malloc(sizeof(int)*s->size);
    return s;
}
int isfull(struct arraystack *s){
    if(s->top==s->size-1){
        return 1;
    }else{
        return 0;
    }
}
int isempty(struct arraystack *s){
    if(s->top==-1){
        return 1;
    }else{
        return 0;
    }
}
void push(struct arraystack *s, int item){
  if(!isfull(s)){
      s->top++;
      s->arry[s->top]=item;
  }
}
int pop(struct arraystack *s){
    int item;
    if(!isempty(s)){
        item=s->arry[s->top];
        s->top--;
        return (item);
    }
    return -1;


}

int main(){
        int ch;
        int item;
        struct arraystack *s;
        s=createstack(100);
    while(1){
    printf("1.for push\n");
    printf("2.for pop\n");
    printf("3.for exit\n");
    //printf("4.for push\n");
    printf("enter the value of=");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("\nenter the push item=");
        scanf("%d",&item);
        push(s,item);
        
        break;
        case 2:
        item=pop(s);
        if(item==-1){
            printf("\n your stack is empty\n");
        }else{
            printf("\n your pop item=%d\n",item);
        }

        break;
        case 3:
        exit(0);

        break;
        default:
        printf("\ninvalid");
    }
    
    }
    return 0;
}