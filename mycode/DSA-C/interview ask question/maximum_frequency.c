#include<stdio.h>
int getMostPopularElement(int arr[], int n)
{
    int count = 1, tempCount;
    int temp = 0;
    //Get first element
    int popular = arr[0];
    for (int i = 0; i < (n- 1); i++)
    {
        temp = arr[i];
        tempCount = 0;
        for (int j = 1; j < n; j++)
        {
            if (temp == arr[j])
                tempCount++;
        }
        if (tempCount > count)
        {
            popular = temp;
            count = tempCount;
        }
    }
    return popular;
}
int main()
{
    int arr[]={1,9,9,9,9,9,9,9,9,2,8,4,9,5,8,7,8,3,8,8,8};
    const int N = sizeof(arr)/sizeof(int);
    const int popular = getMostPopularElement(arr, N);
    printf(" %d \n\n", popular);
    return 0;
}