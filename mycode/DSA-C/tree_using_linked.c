#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
int main(){
    struct node *start=(struct node *)malloc(sizeof(struct node));
    start->data=2;
    start->left=NULL;
    start->right=NULL;
    struct node *second=(struct node *)malloc(sizeof(struct node));
    second->data=1;
    second->left=NULL;
    second->right=NULL;
    struct node *third=(struct node *)malloc(sizeof(struct node));
    third->data=4;
    third->left=NULL;
    third->right=NULL;
    start->left=second;
    start->right=third;
  return 0;
}