#include<stdio.h>
#include<stdlib.h>
struct arraystack{
    int size;
    int top;
    int *arr;
};
struct arraystack* createarray(int cap){
    struct arraystack *s=(struct arraystack *)malloc(sizeof(struct arraystack));
    s->size=cap;
    s->top=-1;
    s->arr=(int *)malloc(s->size * sizeof(int));
    printf("\n\t\t memory successfully created\n");
    return s;
}
int isempty(struct arraystack* sp){
    if(sp->top==-1){
        printf("\n\t\tyour stack is empty");
        return 1;
    }else{
        //printf("\nyour stack is not empty");
        return 0;
    }
}
int isfull(struct arraystack* sp){
    if(sp->top==sp->size-1){
        printf("\n\t\tyour stack is full\n");
        return 1;
    }else{
        return 0;
    }
}
void push(struct arraystack* sp,int value){
    if(isfull(sp)){
        printf("\n\t\tyour stack is full\n");
    }else{
        sp->top++;
        sp->arr[sp->top]=value;
    }
}
int peek(struct arraystack* sp,int i){
      int n=sp->top-i+1;
      if(n<0){
          printf("\nthis is not available");
          return -1;
      }else{
          return (sp->arr[n]);
      }

}
int pop(struct arraystack* sp){
    int po;
    if(!isempty(sp)){
      po=sp->arr[sp->top];
      sp->top--;
      return (po);
    }else{
        return 0;
    }
}
int topview(struct arraystack* sp){
    int top;
    if(!isempty(sp)){
        top=sp->arr[sp->top];
        return (top);
      }else{
          return 0;
      }
}
int lastview(struct arraystack* sp){
    int last;
    if(!isempty(sp)){
      last=sp->arr[0];
      return (last);
    }else{
        return 0;
    }
}


int main(){
    int ch;
    int p;
    struct arraystack* sp;
    sp=createarray(11);
   // isempty(sp);         //jaha jarurat hai oha pass krna chahiye sirf
    isfull(sp);
   while(1){
     printf("\n1.for input and push\n");
    printf("2.for peek\n");
    printf("3.for pop\n");
    printf("4.view on top\n");
    printf("5.for view on last\n");
    printf("6.for exit\n");
    printf("\nplease enter your response=");
    scanf("%d",&ch);
    switch(ch){
        case 1:
       // printf("this option is comming soon\n");
       printf("enter the value do you want to push=");
       scanf("%d",&p);
       push(sp,p);
        break;
        case 2:
         for(int j=1; j<=sp->top+1; j++){
        printf("\n\t\tyour position %d and value=%d",j,peek(sp,j));

        }
        //printf("this function is comming soon\n");
        break;
        case 3:

        printf("\n\t\tyour pop item is=%d",pop(sp));
        break;
        case 4:
        printf("\n\t\t your top of in stack is=%d\n",topview(sp));
        //printf("this function is comming soon\n");
        break;
        case 5:
        printf("\n\t\tyour last in stack is=%d",lastview(sp));
        //printf("this functionis comming soon\n");
        break;
        case 6:
        exit(0);
        break;
        default:
        printf("\n\t\tinvilid option is chossen please contect rahul ranjan\n");
        break;
    }
   }
    return 0;
}