#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[50];
    cout<<"Enter a string-";
    int v=0,c=0,s=0;
    gets(str);
  
    
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
    {
        v++;
    }else if(str[i]==' '){
        s++;
    }
    else 
    {
        c++;
    }
    }
    cout<<"vawal-"<<v<<" ";
    cout<<"consonen--"<<c<<" ";
    cout<<"space="<<s;
    return 0;
}