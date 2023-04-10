#include<stdio.h>
int mostfrequcyelement(int arr[],int n){
    int count=1;
    int elemnt=arr[0];
    for(int i=0; i<n-1; i++){
        int check=arr[i];
        int count2=0;
        for(int j=1; j<n; j++){
            if(check==arr[j]){
                count2++;
            }
        }
        if(count2>count){
            elemnt=check;
            count=count2;
        }
    }
    return elemnt;
    //return count;

}
int main(){
    int arr[]={1,4,5,4,2,4,4,9,4};
    int n=sizeof(arr)/sizeof(int);
    printf("\n%d",mostfrequcyelement(arr,n));
    return 0;
}