#include <stdio.h>
int main()
{
    int p;
    printf("enter==");
    scanf("%d",&p);
  int a = 2; 
  while(a <= p){
   int count = 0;
    for(int i=2; i*i<=a; i++){
      if(a%i == 0){
        count++;
	   break;
      }	
    }	
    if(count == 0){
	printf(" %d ", a);
    }
    a++; 
  }
  return 0;
}