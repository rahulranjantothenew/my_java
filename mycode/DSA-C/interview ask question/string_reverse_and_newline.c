#include<stdio.h>
#include<string.h>
int main(){
    char c[20];
    printf("enter your string=");
   gets(c);
    int n=strlen(c);
     int i=0;
    while(n>i){
     if(i==n){
        break;
     }
       if(c[i]==' '){
        printf("\n");
       }
       printf("%c",c[i]);
       i++;
       
    }
    
    
    return 0;
}