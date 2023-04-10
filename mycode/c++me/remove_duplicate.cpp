#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no: ";
    cin>>n;
    int arr[n];
    cout<<"Enter a Array value: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j;k<n;k++)
            {
                arr[k]=arr[k+1];
            }
                n--;
            
            
            
            }
            
        }
        
    }
    for(int i=0;i<n;i++)
           {
             cout<<arr[i]<<" ";
           } 
      
   
    return 0;
   
}