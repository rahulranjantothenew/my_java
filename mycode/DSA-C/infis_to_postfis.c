#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
struct stack{
    int size;
    int top;
    char *arr;
};
int stacktop(struct stack *sp){
    return (sp->arr[sp->top]);
}
int isempty(struct stack *sp){
    if(sp->top==-1){
        return 1;
    }else{
        return 0;
    }
}
int isfull(struct stack *sp){
    if(sp->top==sp->size-1){
        return 1;
    }else{
        return 0;
    }
}
void push(struct stack *sp,int val){
    if(isfull(sp)){
        printf("your stack is full\n");
    }else{
        sp->top++;
        sp->arr[sp->top]=val;
    }
}
int pop(struct stack *sp){
    if(isempty(sp)){
        printf("yoru stack is empty\n");
    }else{
    char pp=sp->arr[sp->top];
    sp->top--;
    return pp;
    }
}
int precedence(char ch){
    if(ch=='*' || ch=='/'){
        return 3;
    }else if(ch=='+' || ch=='-'){
        return 2;
    }else{
        return 0;
    }
}
int isoperater(char ch){
    if(ch=='*' || ch=='/' || ch=='+' || ch=='-'){
        return 1;
    }else{
        return 0;
    }
}
char *infixtopostfix(char *infix){
    struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
    sp->size=100;
    sp->top=-1;
    sp->arr=(char *)malloc(sp->size * sizeof(char));
    char *postfix=(char *)malloc(strlen((infix)+1) * sizeof(char));
    int i=0;
    int j=0;
    while(infix[i]!='\0'){
        if(!isoperater(infix[i])){
            postfix[j]=infix[i];
            j++;
            i++;
        }else{
            if(precedence(infix[i])>precedence(stacktop(sp))){
                push(sp,infix[i]);
                i++;
            }else{
                postfix[j]=pop(sp);
                j++;
            }

        }
    }
    while(!isempty(sp)){
        postfix[j]=pop(sp);
        j++;
    }
    postfix[j]='\0';
    return postfix;
}
int main(){
    char *infix="x-y+z";
    printf("postfix is %s",infixtopostfix(infix));
    return 0;
}