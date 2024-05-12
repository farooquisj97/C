#include <stdio.h>

void insertion_sort(int array[], int length)
{
     int element, i, j;

    for (i=1; i<length; i++)
    {
        element = array[i];
        j = i-1;

        while (j>=0 && element<array[j])
        {
            array[j+1] = array[j];
            j = j-1;
        }
        array[j+1] = element;
    }
}

int main()
{
    int array[]={9,4,8,3,5,7,2,0,6,1},len;
    len = sizeof(array)/sizeof(array[0]);

    printf("length of array is %d\n", len);

    insertion_sort(array, len);

    printf("the sorted array is:");
    for (int i=0; i<len; i++)
        printf("%3d", array[i]);

    return 0;
}
