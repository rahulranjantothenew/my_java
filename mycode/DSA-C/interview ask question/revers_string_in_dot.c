#include<stdio.h>
#include<string.h>
void reversestring(char c[],int n){
          int n2=n; 
        for(int i=n-1; i>=0; i--){
            if(c[i]=='.' || i==0){
            for(int j=i; j<n2; j++){
               printf("%c",c[j]);
            }
            n2=i+1;
                
            }
        }
}

int main(){
    char c[100];
    printf("enter your string==");
    scanf("%s",&c);
    int n=strlen(c);
    reversestring(c,n);

    return 0;
}