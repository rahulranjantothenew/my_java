#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct stack{
    int top;
    int size;
    int * arr;
};

int main(){


    while(1){
        int ch;
        int p;
    
    printf("\n1.for display stack or peek stack\n");
    printf("2.for push your stack\n");
    printf("3.for pop your stack\n");
    printf("4.for view in top your stack\n");
    printf("5.for view in last your stack\n");
    printf("6.for exit your stack\n");
    printf("please input your option=");
    scanf("%d",&ch);
    struct stack *s=(struct stack *)malloc(sizeof(struct stack));
    s->size=100;
    s->top=-1;
    s->arr=(int *)malloc(s->size * sizeof(int));

    switch(ch){
        case 1:
        for(int j=1; j<=s->top+1; j++){
        printf("\n\t\tyour position %d and value=%d\n",peek(s,j));

        }
        break;
        case 2:
        printf("\n\tenter the value the do you want to push in your stack =");
         scanf("%d",&p);
         push(s,p);
        break;
        case 3:
        printf("\n\tthis function its comming soon\n");
        break;
        case 4:
        printf("\n\tthis functon is comining soon\n");
        break;
        case 5:
        printf("\n\tthis function is comming soon\n");
        break;
        case 6:
        exit(0);
        break;
        default:
        printf("\t\t\ninilid option you are chossen please contect Rahul Ranjan\n");
        break;
    }
    }

    return 0;
}