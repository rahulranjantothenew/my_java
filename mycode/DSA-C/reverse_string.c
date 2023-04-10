#include<stdio.h>
#include<conio.h>
int main(){
    char s[5]="def";
    for(int i=0; i<3; i++){
        s[i]=s[2-i];
    }
    for(int i=0; i<3; i++){
        printf("\nyour reverse string is %c",s[i]);
    }
    return 0;

}