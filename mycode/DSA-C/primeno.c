#include<stdio.h>
void primeall(int n){
  int t=2;
  while(t<=n){
    int r=0;
   for(int i=2; i*i<=t; i++){
      if(t%i==0){
        r++;
        break;
      }
    }
    if(r==0){
      printf(" %d",t);
    }
    t++;
  }
}
int main(){
  int p;
  printf("enter ==");
  scanf("%d",&p);
  primeall(p);
  return 0;
}