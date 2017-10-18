#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int arr [SIZE] = {1,2,3,4,5,6,7,8,9,10};

int main()
{
    int index = 0, key;

    scanf("%i",&key);

    index = binarySearch(arr, SIZE, key);

    if (index != -1)
        printf("Element was found at index: %i",index );

    else
        printf("Element not found");

    return 0;
}

int linearSearch (int array[], int size, int searchKey)

{
    int i;

    for (i=0; i<size; i++)
    {
        if (array[i] == searchKey)
        {
            return i;
        }

    }

    return -1;
}



int binarySearch (int array[], int size, int searchKey)
{
    int start = 0, end = size-1, middle;



    while (start <= end)
    {
        middle = (start+end)/2;

        if (array [middle] == searchKey)
            return middle;

        else if (array [middle] < searchKey)
            start = middle + 1;

        else
            end = middle -1;
    }
    return -1;
}
