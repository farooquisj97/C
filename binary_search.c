# include <stdio.h>

void main() 
{
int n, arr[20], i, x, high, mid, low;
printf("no. of elements: ");
scanf("%d", &n);

for (i=0; i<n; i++) 
{
scanf("%d", &arr[i]);
}

printf("element to search: ");
scanf("%d", &x);

low = 0;
high = n;
mid = (high + low)/2;

while(low<=high)
{
mid = (high + low)/2;

if (arr[mid]<x)
low = mid+1;

else if (arr[mid]==x)
{
printf("element found at index %d\n", mid+1);
break;
}

else 
high = mid-1;
}

if (low>high)
printf("element not found\n");

}
