/*

This C program sorts a given array of integer numbers using Selection Sort technique.
The algorithm divides the input list into two parts: the sublist of items already sorted,
which is built up from left to right at the front (left) of the list, and the sublist of
items remaining to be sorted that occupy the rest of the list. Initially, the sorted sublist
is empty and the unsorted sublist is the entire input list. The algorithm proceeds by finding
the smallest (or largest, depending on sorting order) element in the unsorted sublist,
exchanging it with the leftmost unsorted element (putting it in sorted order), and moving the
sublist boundaries one element to the right. Time Complexity of this algorithm is O(n2).

------------
OUTPUT:
How many numbers you want to sort: 5
Enter 5 numbers : 34 13 204 355 333
Sorted array is : 13 34 204 333 355

------------------

EXCHANGE ??? FOR CORRECT CODE

 */




#include <stdio.h>


//fucntion to swap to variables
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
	*a = *b;
    *b = temp;
}

void selectionSort(int arr[], int size)
{
    int i, j;
    for (i = 0 ;  i < size;i++)
    {
        for (j = i ; j < size; j++)
        {
            if (arr[i] > arr[j])
                swap(&arr[i], &arr[j]);

        }
    }
}

int main()
{
    int array[10], i, size;
    printf("How many numbers you want to sort:  ");
    scanf("%d", &size);
    for (i = 0; i < size; i++){
        printf("Enter no. %d :\n", i);
        scanf("%d", &array[i]);
    }
    selectionSort(array, size);
    printf("\nSorted array is ");

    for (i = 0; i < size; i++)
        printf(" %d ", array[i]);
    return 0;

}
