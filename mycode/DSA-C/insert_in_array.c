#include<conio.h>
#include<stdio.h>
int main(){
    int n;
    int arr[100];
printf("\nenter the length of aray=");
scanf("%d",&n);
for(int i=0; i<n; i++){
    printf("enter the elemet of index %d=",i);
    scanf("%d",&arr[i]);
}
int indx;
printf("enter the index do you want to insert =");
scanf("%d",&indx);
int val;
printf("enter the value of do you want to enter=");
scanf("%d",&val);
for(int i=n-1; i>=indx; i--){
 arr[i+1]=arr[i];
}
arr[indx]=val;

for(int i=0; i<=n; i++){
    printf("\nyour index =%d and value %d is",i,arr[i]);
}
printf("\nthe size of array is=%d",sizeof(arr[n]));
    return 0;
}