#include<stdio.h>

/* This "function" does not work
int selection_sort(int array, int length)
{
      int i, j, min_pos;

    for (i=0; i<length; i++)
    {
        min_pos = i;
        for (j=i+1; j<length; j++)
        {
            if (array[j] < array[min_pos])
            min_pos = j;
            
            if (min_pos!=i)
            {
                int temp = array[i];
                array[i] = array[min_pos];
                array[min_pos] = temp;
            }

        }
    }
}*/

int main()
{
    int array[]={9,4,8,3,5,2,7,0,6,1},len;
    len = sizeof(array)/sizeof(array[0]);

    printf("length of array is %d\n", len);

    //selection_sort(array, len);

    int i, j, min_pos;

    for (i=0; i<len; i++)
    {
        min_pos = i;
        for (j=i+1; j<len; j++)
        {
            if (array[j] < array[min_pos])
            min_pos = j;
            
            if (min_pos!=i)
            {
                int temp = array[i];
                array[i] = array[min_pos];
                array[min_pos] = temp;
            }

        }
    }

    printf("the sorted array is:");
    for (int i=0; i<len; i++)
        printf("%3d", array[i]);


    return 0;
}