#include<stdio.h>
void ReverseInGroup(int arr[], int n, int k)
{
	if(n<k)
	{
	k=n;
	}
	int d = k-1, m=2;
		
	for (int i = 0; i < n; i++)
	{
		if (i >= d)
		{
			// Update the variables
			d = k * (m);
			if(d>=n)
			{
				d = n;			
			}		
			i = k * (m - 1)-1;
			m++;
			
		}
		else
		{
			int t = arr[i];
			arr[i] = arr[d];
			arr[d] = t;
		}

	d = d - 1;	
		
	}
	return;
		
}

// Driver code
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int k = 3;

	int n = sizeof(arr) / sizeof(int);

	ReverseInGroup(arr, n, k);

	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

	return 0;
}
