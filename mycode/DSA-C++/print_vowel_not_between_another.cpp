#include<iostream>
using namespace std;
void printvowel(string str,int n){
    for(int i=0; i<n-1; i++){
        
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
                if(str[i+1]=='a' || str[i+1]=='e' || str[i+1]=='i' || str[i+1]=='o' || str[i+1]=='u'){

                 cout<<str[i];
                 cout<<str[i+1]<<" ";
                }
            }
    
    }
}
int main(){
    string str="please read this application and give me gratuity";
    int n=str.length();
    cout<<n<<endl;
    printvowel(str,n);
    return 0;
}