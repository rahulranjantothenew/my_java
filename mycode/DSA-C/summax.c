#include<stdio.h>
#include<conio.h>
int main(){
    int arr[]={1,-2,4,5,-6,8};
        int max=1;
    for(int i=0; i<=5; i++){
        if(max <= max + arr[i+1]){
            max=max+arr[i+1];
            //i++;
        }else{
            //i++;
        }
    }
    printf("%d",max);
    return 0;
}