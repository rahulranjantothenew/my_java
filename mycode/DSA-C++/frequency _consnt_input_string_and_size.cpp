#include<iostream>

using namespace std;
int main(){
    char c[];
    cout<<"enter==";
    //cin>>c;
    //getline(cin,c);
    gets(c);
    int n=strlen(c);
    cout<<n<<endl;
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
    return  0;
}