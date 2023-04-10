#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter the no==");
    scanf("%d",&n);
    int orginel=n;
    int count=0;
    while(n!=0){
      count++;
      n=n/10;
    }
    int armestrong=0;
    int reminder;
    while(orginel!=0){
        reminder=orginel%10;
        int t=1;
        //armestrong+=pow(reminder,count);
         for(int i=1; i<=count; i++){
            t *=reminder;
         }
         armestrong +=t;
         orginel =orginel/10;
    }
    printf("====%d",armestrong);
    return 0;
}