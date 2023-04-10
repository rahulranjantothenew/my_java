#include<stdio.h>
#include<conio.h>
int tree[10];

void root(int x)
{
    tree[0] = x;
}
void left(int x, int p)
{ 
    if(tree[0]==0)
    { 
        printf("\nPARENT OF %d DOES NOT EXIST!");
    }
    else
    {
        tree[(2*p)+1]= x;
    }
}

void right(int x, int p)
{ 
    if(tree[p]==0)
    { 
        printf("\nPARENT OF %d DOES NOT EXIST!");
    }
    else
    {
        tree[(2*p)+2]= x;
    }
}

void display()
{
    printf("\n NODES OF TREE: ");
    for(int i=0; i<10; i++)
    {
        printf("%d ", tree[i]);
    }
}

void main()
{
    
    root(5);
    right(3,0);
    left(2,2);
    right(1,2);
    display();
    getch();
}