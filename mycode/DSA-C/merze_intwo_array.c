#include<stdio.h>
void sorting(int arr[],int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
}
void merze(int a[],int b[],int n,int m,int c[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }else{
            c[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<n){
        c[k]=a[i];
        i++;
        k++;
    }
     while(j<m){
        c[k]=b[j];
        j++;
        k++;
    }
    for(int j=0; j<n+m; j++){
      printf(" %d",c[j]);
    }
}
int main(){
    int a[]={8,2,5,7};
    int n=sizeof(a)/sizeof(int);
    int b[]={9,1,3,4};
    int m=sizeof(b)/sizeof(int);
    int c[40];
    sorting(a,n);
    sorting(b,m);
    merze(a,b,n,m,c);
    return 0;
}