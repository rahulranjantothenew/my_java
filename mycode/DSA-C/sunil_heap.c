#include<stdio.h>
#include<conio.h>
#define size 10

int heap[size], count=0;

void heapify(int i)
{
    if(count==1)
    {
        printf("\nSINGLE ITEM IN THE HEAP");
    }
    else 
    {
        int largest = i;
        int left =(2*i)+1;
        int right = (2*1)+2;
        if(i<count && heap[left] > heap[largest])
        {
            largest = left;
        }
        if(i<count && heap[right] > heap[largest])
        {
            largest = right;
        }
        if (largest!=1)
        {
            int temp = heap[i];
            heap[i] = heap[largest];
            heap[largest] = temp;
            heapify(largest);
        }
    }
}

void insert(int item)
{
    if (count==0)
    {
        heap[0] = item;
        count++;
    }
    else
    { 
        heap[count] = item;
        count = count + 1;
        for(int i = (count-1)/2; i>=0; i++)
        {
            heapify(i);
        }
    }
}

void display()
{
    for (int i=0; i<count; i++)
    {
        printf("%d", heap[i] );
    }
}

void main()
{
    insert(8);
    insert(5);
    insert(3);
    
    printf("\n ELEMENTS OF HEAP: ");
    display();
    getch();
    
}