#include <conio.h>
#include <stdio.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        printf(" ");
    }
} 


int insert1(int arr[], int n, int element, int index)
{
    if (index >= n)
    {
        return -1;
    }
    else
    {
        for (int i = n - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
        return 1;
    }
}
int deletearray(int arr[], int n, int deleteindex)
{
    if (deleteindex >= n)
    {
        return -1;
    }
    else
    {
        for (int i = deleteindex; i <= n - 1; i++)
        {
            arr[i] = arr[i+1];
        }
        return 1;
    }
}
int searcharray(int arr[],int n,int find){{
    for(int i=0; i<n; i++){
        if(arr[i]==find){
            return i;
        }
    }
    return -1;
}

}
int leanearsearch(int arr[],int n,int find){
    for(int i=0; i<n; i++){
        if(arr[i]==find){
            return i;
        }
    }
    return -1;


}
int binarysearch(int arr[],int n,int find){
  
    int low,high,mid;
    low=0;
    high=n-1;
 while(low<=high){
    mid=(low+high)/2;
     if(arr[mid]==find){
         return mid;
     }if(arr[mid]<find){
         low=mid+1;
     }else{
         high=low-1;
     }
 }
 return -1; 
}
int largest(int arr[], int n) {
        int mx=0;
    for(int i=0; i<n-1; i++){
        
            if(arr[i]>arr[i+1]){
                mx=arr[i];
            
            }else{
                mx=arr[i+1];
            }
        
    }
    return mx;
}


int main()
{
  while(1){

  
    int option;
    int n;
    int arr[100];
    int element;
    int index;
    int deleteindex;
    int find;
    printf("\n******************************  manu   ************************************\n");
    printf("**********************************************************************************************\n");
    printf("1.<<<<<<<<<<<<--for only display\n");
    printf("2.<<<<<<<<<<<<--for insertion\n");
    printf("3.<<<<<<<<<<<<--for deletion\n");
    printf("4.<<<<<<<<<<<<--for searching\n");
    printf("5.<<<<<<<<<<<<--for leaner searching\n");
    printf("6.<<<<<<<<<<<<--for binary searching\n");
    printf("7.<<<<<<<<<<<<--for modification of array\n");
    printf("8.<<<<<<<<<<<<--apgreade the array\n");
    printf("9.<<<<<<<<<<<<--multiple array insertion in one time\n");
    printf("10.<<<<<<<<<<<<--multiple arry deletation in one time\n");
    printf("11.<<<<<<<<<<<<-for reverse the array\n");
    printf("12.<<<<<<<<<<<<-for greatest no of ths array\n");
    printf("chose the option. do you want to use the facility from my sofware --------- =");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        
        printf("enter the length of array=");
        scanf("%d", &n);
    

        for (int i = 0; i < n; i++)
        {
            printf("enter the index of arry%d-", i);
            scanf("%d", &arr[i]);
        }

        display(arr, n);
        break;

    case 2:
    
        printf("enter the length of array=");
        scanf("%d", &n);
        
        for (int i = 0; i < n; i++)
        {
            printf("enter the index of arry %d-", i);
            scanf("%d", &arr[i]);
        }
        
        printf("enter the element do you want to insert =");
        scanf("%d", &element);
        
        printf("enter the index where do you want to insert the index=");
        scanf("%d", &index);
        
        if (insert1(arr, n, element, index) == 1)
        {
            printf("after the insertion\n");
            n = n + 1;
            display(arr, n);
        }
        else
        {
            printf("sorry.. your array is too sort\n");
            printf("chootiya hai kaya\n");
        }

        break;

    case 3:
        
        printf("enter the length of array=");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            printf("enter the index of arry%d-", i);
            scanf("%d", &arr[i]);
        }
        printf("enter the array index where do u want to delete the index=");
        scanf("%d", &deleteindex);
        if (deletearray(arr, n, deleteindex) == 1)
        {
            n = n - 1;
            display(arr, n);
        }
        else
        {
            printf("ur array is too short\n");
        }

        break;

    case 4:
    
        printf("enter the length or array =");
        scanf("%d",&n);
        for(int i=0; i<n; i++){
            printf("enter the index of arry=%d--",i);
            scanf("%d",&arr[i]);
        }
        printf("enter the array do you want to search=");
        scanf("%d",&find);
       if(searcharray(arr,n,find)>0){
           printf("ur array in idex=%d",searcharray(arr,n,find));
       }else{
           printf("your array is not present");
       }

        break;

    case 5:
       // printf("the work will be in process.  this function is coming soon. please wait bro\n");
        printf("enter the length or array =");
        scanf("%d",&n);
        for(int i=0; i<n; i++){
            printf("enter the index of arry=%d--",i);
            scanf("%d",&arr[i]);
        }
        printf("enter the array do you want to search=");
        scanf("%d",&find);
       if(leanearsearch(arr,n,find)>0){
           printf("ur array by  leanear search index=%d",leanearsearch(arr,n,find));
       }else{
           printf("your array is not present");
       }
        break;

    case 6:
        
        printf("enter the length or arry=");
        scanf("%d",&n);
        printf("please enter the sorted array please......\n");
        for(int i=0; i<n; i++){
            printf("enter the index of array is=%d=",i);
            scanf("%d",&arr[i]);
        }
        
        printf("enter the searching array do you want to search here=");
        scanf("%d",&find);

        if(binarysearch(arr,n,find) >=0){
            printf("%d",binarysearch(arr,n,find));

        }else{
            printf("ur array is not here please try again letter");
        }
        break;

    case 7:
        printf("the work will be in process.  this function is coming soon. please wait bro\n");
        break;
    case 8:
        printf("the work will be in process.  this function is coming soon. please wait bro\n");
        break;
    case 9:
        printf("the work will be in process.  this function is coming soon. please wait bro\n");
        break;
    case 10:
        printf("the work will be in process.  this function is coming soon. please wait bro\n");
        break;
    case 11:
    printf("the work will be in process.  this function is coming soon. please wait bro\n");
       /* int n;
        Printf("enter the length of array=");
        scanf("%d",&n);
        for(int i=0; i<n; i++){
            printf("enter the index of=%d-",i);
            scanf("%d",arr[i]);

        }
        printf("reversing the array that you are input in=%d",revercearray(arr,n)); */
        break;
        case 12:
        printf("enter the length or arry=");
        scanf("%d",&n);
        printf("please enter array please......\n");
        for(int i=0; i<n; i++){
            printf("enter the index of array is=%d=",i);
            scanf("%d",&arr[i]);
        }
        printf("your largest element in this array is =%d",largest(arr,n));
        break;
    default:
        printf("invilid option ur are chosing\n");
        printf("..... oho....please try again\n");
        printf("........other wise you can contect on RAHUL RANJANA........\n");
    }
  getch();
  }

    return 0;
}