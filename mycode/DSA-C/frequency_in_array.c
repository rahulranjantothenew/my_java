#include<stdio.h>
#include<conio.h>

int main()

{

int arr[100], freq[100];

int size, i, j, count;

/* Input size of array */

printf("\nEnter size of array:");

scanf("%d", &size);

/* Input elements in array */

printf("\nEnter elements in array: ");

for(i=0; i<size; i++)

{

scanf("%d", &arr[i]);

/* Initially initialize frequencies to -1 */

freq[i] = -1;

}


for(i=0; i<size; i++)

{

count = 1;

for(j=i+1; j<size; j++)

{

/* If duplicate element is found */

if(arr[i]==arr[j])

{

count++;

/* Make sure not to count frequency of same element again */

freq[j] = 0;

}

}

/* If frequency of current element is not counted */

if(freq[i] != 0)

{

freq[i] = count;

}

}

/* Print frequency of each element */

printf("\nFrequency of all elements of array : =");

for(i=0; i<size; i++)

{

if(freq[i] != 0)

{

printf("\n%d occurs %d timesn-", arr[i], freq[i]);

}
}
}