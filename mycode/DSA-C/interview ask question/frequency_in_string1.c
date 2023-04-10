#include<stdio.h>
#include<string.h>

int main(){
   char c[100];
   printf("enter your string==");
   scanf("%s",&c);
   int n=strlen(c);
   int check;
  for(int i=0; i<n; i++){
         int count=1;
      //if(c[i]){
             for(int j=i+1; j<n; j++){
             if(c[i]==c[j]){
           count++;
           c[j]='\0';
          }

    }
       printf(" ");
       printf(" %c%d",c[i],count);

        // }
     

    }
   
    return 0;

    
}