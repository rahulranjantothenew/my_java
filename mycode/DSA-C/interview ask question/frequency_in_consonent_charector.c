#include<stdio.h>
#include<string.h>
int main(){
    char c[100];
    printf("enter the string do you want to insert==");
    //scanf("%s",&c);
    gets(c);
    int n=strlen(c);
    printf("%d",n);
   
    for(int i=0; i<n; i++){
       
            if(c[i]){
                 int count=1;
           for(int j=i+1; j<n; j++){
            if(c[i]==c[j]){
                count++;
                c[j]='\0';

            }
           }
            if(c[i]!='a' && c[i]!='e' && c[i]!='i' && c[i]!='o' &&c[i]!='u' && c[i]!=' '){
           printf(" ");
           printf("%c%d",c[i],count);
            }

        }
           
       
    }
    return 0;
}