#include<stdio.h>
 
int main()
{
    char s[10];  
    int  i,k,count=0,n;
 
    printf("Enter  the string : ");
    scanf("%s",&s);
     
    for(int j=0;s[j];j++){

	 n=j; 
    }
    
	printf(" frequency count character in string:\n");
 
    for(int i=0;i<n;i++)  
    {
     	count=1;
    	if(s[i])
    	{
		
 		  for(int j=i+1;j<n;j++)  
	      {   
	    	
	        if(s[i]==s[j])
    	    {
                 count++;
                 s[j]='\0';
	     	}
	      }  
	      printf(" '%c' = %d \n",s[i],count);
       } 
 	} 
     
    return 0;
}