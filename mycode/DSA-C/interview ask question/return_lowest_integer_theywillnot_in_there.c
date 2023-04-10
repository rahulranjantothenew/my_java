#include<stdio.h>
int smallestinteger(int A[],int n){
    int sm=A[0];
    for(int i=0; i<n; i++){
      if(sm>A[i]){
        sm=A[i];
      }
    }
    return sm;
}
int realvalue(int A[],int n){
    int k=smallestinteger(A,n);
    for(int j=0; j<n; j++){
        if((k+1)==A[j]){
            k=A[j];

        }
    }
    return k+1;
}
int main(){
    int n;
    printf("enter the length of array=");
    scanf("%d",&n);
    int A[n];
    for(int i=0; i<n; i++){
        printf("\nenter the index of=%d=",i);
        scanf("%d",&A[i]);

    }
    printf("\nthe smallest integer is your array not occupay in yr array=%d",realvalue(A,n));
    return 0;
}