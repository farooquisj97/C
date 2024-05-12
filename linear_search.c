# include <stdio.h>

int linear_search (int x, int arr[], int len) 
{
int i, pos;
pos = len;
for (i=0; i<len; i++)
{
if (arr[i]==x)
{
pos = i;
break;
}
}
return pos;
}

void main() 
{
int n, arr[n], len, i, x, pos;
printf("no. of elements: ");
scanf("%d", &n);

for (i=0; i<n; i++) 
{
scanf("%d", &arr[i]);
}

printf("element to search: ");
scanf("%d", &x);

len = sizeof(arr)/sizeof(arr[0]);

pos = linear_search(x,arr,len);

if (pos==len)
printf("element not found\n");

else
printf("element found at index %d\n", pos+1);

}
