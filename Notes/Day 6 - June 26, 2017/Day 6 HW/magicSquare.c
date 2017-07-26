/*

C Program to Solve the Magic Squares Puzzle without using Recursion

The following C program, using iteration, finds the magic square
for a given odd sized number. A magic square is an arrangement of
numbers from 1 to n^2 in an [n x n] matrix, with each number occurring
exactly once, and such that the sum of the entries of any row, any
column, or any main diagonal is the same.

INPUT AND OUTPUT:
nter the size: 6
Magic square works for an odd numbered size

$ a.out
Enter the size: 5
17  24  1  8  15
23  5  7  14  16
4  6  13  20  22
10  12  19  21  3
11  18  25  2  9
-------------

REPLACE ??? FOR CORRECT CODE
*/

#include <stdio.h>

void magicsq(int, int [][10]);

int main( )
{
    int size;
    int a[10][10];

    printf("Enter the size: (Boundary set for 10) ");
    scanf("%d", &size);
    if (size % 2 == 0)
    {
        printf("Magic square works for an odd numbered size\n");
    }
    else if(size<10)
    {
        magicsq(size, a);
    }
    else
        printf("\nArray size too large for initialization. Sorry Try With a smaller number.\n");
    return 0;
}

void magicsq(int size, int a[][10])
{
    int sqr = size * size;
    int i = 0, j = size / 2, k;

    for (k = 1; k <= sqr; ++k)
    {
        a[i][j] = k;
        i--;
        j++;

        if (k % size == 0)
        {
            i += 2;
            --j;
        }
        else
        {
            if (j == size)
            {
                j -= size;
            }
            else if (i < 0)
            {
                i+=size;
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%2d  ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
