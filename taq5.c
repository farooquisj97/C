#include<stdio.h>
 int binary_search(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size-1;

    while (low<=high) {
        mid = (low+high)/2;
        if (arr[mid]==element){
            return mid;
        }
        if (arr[mid]<element){
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }

    return -1;
 }


void main() {
    int a[] = {21, 32, 39, 44, 56, 69, 98, 112, 147};
    int element=112;
    int size = sizeof(a)/sizeof(int);
    int search_index = binary_search(a, size, element);
    printf("The element %d was found at index %d\n", element, search_index);   
}