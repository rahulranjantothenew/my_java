#include<stdio.h>
int main(){
printf("enter the lenght of piramid(please odd enter)=");
int n;
scanf("%d",&n);
for(int i=n/2; i>=1; i--){
    for(int j=i; j>=1; j-- ){
    printf("#");
    }
    printf("*");
    printf("\n");
}
for(int k=1; k>=n/2; k++){
    printf("*");
    for(int l=n/2; l>=1; l--){
     printf("#");
    }
}

    return 0;
}