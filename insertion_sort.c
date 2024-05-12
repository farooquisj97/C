# include <stdio.h>

int insertion_sort (int arr[], int len) 
{
int temp, i, j;
	for (i=1; i<len; i++)
	{	
		temp = arr[i];
		j = i-1;
		
		while (j>=0 && arr[j]>temp)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
	return 0;
}

void main() 
{
	int arr[] = {5,9,2,7,3,6,4,1,0,8}, len, i;
	len = sizeof(arr)/sizeof(arr[0]);
	insertion_sort(arr, len);
	for (i=0; i<len; i++)
	printf ("%d  ", arr[i]);
}
