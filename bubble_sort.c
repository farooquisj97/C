# include <stdio.h>

int bubble_sort (int arr[], int len) 
{
int temp, i, j;
	for (i=0; i<len; i++)
	{
		for (j = 0; j<len; j++)
		{
			if (arr[j+1]<arr[j])
			{
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
			}
		}
	
	}
	return 0;
}

void main() 
{
	int arr[] = {5,9,2,7,3,6,2,4,1,0,8}, len, i;
	len = sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr, len);
	for (i=0; i<len; i++)
	printf ("%d  ", arr[i]);
}
