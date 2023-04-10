#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct prenode{
    int data;
    struct prenode *left;
    struct prenode *right;
};
struct prenode *creatememory(int data){
struct prenode *n=(struct prenode *)malloc(sizeof(struct prenode));
n->data=data;
n->left=NULL;
n->right=NULL;
return n;
}
void preorder(struct prenode *root){
    if(root!=NULL){
        printf("%d",root->data);
        printf(" ");
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct prenode *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
         printf("%d",root->data);
        printf(" ");
    }
}
void inorder(struct prenode *root){
    if(root!=NULL){
        inorder(root->left);
         printf("%d",root->data);
        printf(" ");
       inorder(root->right);
    }
}
int isbst(struct prenode *root){
    static struct prenode *prev=NULL;
    if(root!=NULL){
        if(!isbst(root->left)){
            return 0;
        }
            if(prev!=NULL && root->data <= prev->data){
                return 0;
            }
            prev=root;
            return isbst(root->right);
     }else
        {
            return 1;
        }
    } 
int itretivesearch(struct prenode *root,int key){
    while(root!=NULL){
    if(root->data==key){
        return 1;
    }else if(root->data < key){
        root=root->right;
    }else{
        root=root->left;
    }
    }
    return 0;
    }
int recurstionsearch(struct prenode *root,int key1){
 if(root==NULL){
    return 0;
 }else if(root->data==key1){
    return 1;
 }else if(root->data > key1){
    return(recurstionsearch(root->left,key1));
 }else{
    return(recurstionsearch(root->right,key1));
 }
}


void insertwithindex(struct prenode *root,int datainsert){
     struct prenode *pr=NULL;
     struct prenode *ptr=creatememory(datainsert);
    while(root!=NULL){
        pr=root;
    if(root->data==datainsert){
        printf("\n\t\tSOORY YOU CAN NOT PERFORM INSERTION because data duplicate are not perform in BST");
        return;
    }else if(root->data > datainsert){
        root=root->left;
    }else{
        root=root->right;
    }

}
if(pr->data > datainsert){
    pr->left=ptr;
}else{
    pr->right=ptr;
}

}
struct prenode *deleteleafnode(struct prenode *root,int dnode){
    struct prenode *pree=NULL;
    struct prenode *ptr1=root;
    while(ptr1->data!=dnode){
       pree=ptr1;
       if(ptr1->data > dnode){
        ptr1=ptr1->left;
       }else if(ptr1->data < dnode){
        ptr1=ptr1->right;
    }
}
        if(pree->data > dnode){
         pree->left=NULL;
         free(ptr1);
    }else{
        pree->right=NULL;
         free(ptr1);
    }
    return root;
}
struct prenode *deleteleafnonnode(struct prenode *root,int nonleaf){
    struct prenode *pree2=NULL;
    struct prenode *ptr2=root;
    while(ptr2->data!=nonleaf){
        
       if(ptr2->data > nonleaf){
        ptr2=ptr2->left;
        if(ptr2->right==NULL){
            pree2=ptr2->left;
        }else{
            pree2=ptr2->right;
        }
        
       }else{
        ptr2=ptr2->right;
        if(ptr2->right==NULL){
            pree2=ptr2->left;
        }else{
            pree2=ptr2->right;
        }
        
    }
  }
ptr2->data=pree2->data;
ptr2->left=NULL;
free(pree2);

    return root;
}

struct prenode *inorderpredecessor(struct prenode *root){
    root=root->left;
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}
struct prenode *deleteinall(struct prenode *root,int value){
    struct prenode *ipre;
    if(root==NULL){
       // printf("\n\t\tyou can not delete ");
        return NULL;
    }
    if(root->left==NULL &&  root->right==NULL){
        free(root);
        return NULL;
    }
      
      if(value < root->data){
        root->left=deleteinall(root->left,value);
      }else if(value > root->data){
        root->right=deleteinall(root->right,value);
      }
      else{
        ipre=inorderpredecessor(root);
        root->data=ipre->data;
        root->left=deleteinall(root->left,ipre->data);
      }
      return root;
}

int main(){
    int ch,key,key1,datainsert,dnode,value,nonleaf;
    int n1,n2,n3,n4,n5;
    while(1){
        printf("\n1.PLEASE CREATE FRISTLY 5NODE TREE THEN OTHER OPRERATION APPLY");
        printf("\n2.for preorder");
        printf("\n3.for postorder");
        printf("\n4.for inorder");
        printf("\n5.for binary-search tree with itretive method");
        printf("\n6.for binary-search with recurstion method");
        printf("\n7.for BINARYSEARCH tree insertion");
        printf("\n8.for BINARYSEARCH TREE DELETATION LEAF NODE");
        printf("\n9.for BINARYSEARCH TREE DELETATION NONLEAF NODE");
        printf("\n10.for is binary tree or not");
        printf("\n11.for BINARYSEARCH TREE DELETATION  IN ROOT");
        printf("\n12.for BINARYSEARCH TREE DELETATION  IN all with recursion");
        printf("\n13.for binary tree deletion in last root");
        printf("\n14.for binary tree updation with index");
        printf("\n15.for binary tree addtion root with index");
        printf("\n\t\tenter your responce===");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            printf("enter 1st the data of node=");
            scanf("%d",&n1);
            printf("enter 2st the data of node=");
            scanf("%d",&n2);
            printf("enter 3st the data of node=");
            scanf("%d",&n3);
            printf("enter 4st the data of node=");
            scanf("%d",&n4);
            printf("enter 5st the data of node=");
            scanf("%d",&n5);
            struct prenode *p1=creatememory(n1);
            struct prenode *p2=creatememory(n2);
            struct prenode *p3=creatememory(n3);
            struct prenode *p4=creatememory(n4);
            struct prenode *p5=creatememory(n5);
             p1->left=p2;
            p1->right=p3;
            p2->left=p4;
            p2->right=p5;
            break;
            case 2:
           
            preorder(p1);
            break;
            case 3:
            
            postorder(p1);
            break;
            case 4:
            inorder(p1);
            break;
            case 5:
           
            printf("\n\t\tenter the key do you wnt to search here ==");
            scanf("%d",&key);
            if(itretivesearch(p1,key)==1){
            printf("\n\t\tyes your searching data is in the bst and this is==%d",key);
            }else{
                printf("\n\t\tyour searching data is not in bst");
            }
            break;

            case 6:
           
            printf("\n\t\tenter the key do you wnt to search here ==");
            scanf("%d",&key1);
            if(recurstionsearch(p1,key1)==1){
            printf("\n\t\tYES YOUR SEARCHING DATA IS IN BINARY SEARCH TREE and this is==%d",key1);
            }else{
                printf("\n\t\tyour searching data is not in bst");
            }
            break;
            case 7:
           
            printf("\nenter do you want to insert==");
            scanf("%d",&datainsert);
            insertwithindex(p1,datainsert);
            break;
            case 8:
           
            printf("\nenter do you want to delete==");
            scanf("%d",&dnode);
            deleteleafnode(p1,dnode);
            printf("\n\t\t\t NODE DELETATION SUCCEFULLY");
            break;

            case 9:
          
            printf("\nenter do you want to delete==");
            scanf("%d",&nonleaf);
            deleteleafnonnode(p1,nonleaf);
            printf("\n\t\t\t NODE DELETATION SUCCEFULLY");
            break;
            case 10:
           
            if(isbst(p1)==1){
                printf("\n\t\tIT IS BINARYSEARCH TREE");
            }else{
                printf("\n\t\tIT IS NOT BINARYSEARCH TREE");
            }
            break;
            case 11:
            printf("\nthis function is just cooming soon");
            break;
            case 12:
            
            printf("\nenter do you want to delete==");
            scanf("%d",&value);
            deleteleafnode(p1,value);
            printf("\n\t\t\t NODE DELETATION SUCCEFULLY");
            break;
            case 13:
            printf("\nthis function is just cooming soon");
            break;
            case 14:
            printf("\nthis function is just cooming soon");
            break;
            case 15:
            printf("\nthis function is just cooming soon");
            break;
            default:
            printf("\ninvalid option please contect rahul ranjan");
            break;
        }
    }
    return 0;
}