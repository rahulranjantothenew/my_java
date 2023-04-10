#include<stdio.h>
#include<math.h>
    int n=0;
   int rmstron=0;
int countt(int p){
     for(int i=p; p!=0; n++){
         p=p/10;
    }
    return n;

}
int armestrong(int p){
   
    while(p!=0){
        int rem=p%10;
       rmstron += pow(rem, n);
        p=p/10;
    }
    return rmstron;
}
int main(){
    printf("enter the integer do your want to ==");
    int p;
    scanf("%d",&p);
    printf("\n=========%d",countt(p));
    printf("\nafter armstron no=%d",armestrong(p));

    return 0;
}