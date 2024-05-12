#include <stdio.h>
#include <stdbool.h>

/* This "function" does not work.
int bubble_sort(int arr, int len)
{
    int i, j, rep=0;
    do
    {
        for (i=0; i<len-1; i++)
        {
            j = i+1;
            if (arr[j]<arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        rep = rep+1;
    } while(rep<len);
}*/

/* This yt copied code yet still doesntg work

void bubble_sort(int arr, int length)
{
    bool swapped = false;
    do
    {
        swapped = false;
        for (int j = 0; j < (length - 1); j++)
        {
           if (arr[j]<arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                swapped = true;
            }
        }
    } while (swapped);
}*/

int main()
{
    int arr[]={9,4,8,3,5,7,0,2,6,1},len;
    len = sizeof(arr)/sizeof(arr[0]);

    printf("length of array is %d\n", len);

    //bubble_sort(arr, len);
    int i, j, rep=len;
    do
    {
        for (i=0; i<rep; i++)
        {
            j = i+1;
            if (arr[j]<arr[i])
            {
                int temp = 0;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        rep = rep-1;
        //printf("num of reps = %d\n", rep);
    } while(rep>0);


    printf("the sorted array is:");
    for (int i=0; i<len; i++)
        printf("%3d", arr[i]);

    return 0;
}