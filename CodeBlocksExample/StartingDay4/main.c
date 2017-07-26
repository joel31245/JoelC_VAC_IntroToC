// -1- Program does Bubble Sort
// -2- Program Looks at Header time
// -3- Program Introduces Pointers
#include <stdio.h>
#include <time.h>

int main(){

    /*
    // -1- Program does Bubble Sort
    int array1[5], sortedArray1[5];
    int temp, isSorted=0, length, loopCounter;
    length = sizeof(array1)/4;

    // Setting elements to random
    for(loopCounter=0; loopCounter<length; loopCounter++){
        array1[loopCounter] = ( rand()%25 )+1;
        sortedArray1[loopCounter] = array1[loopCounter];
    }
    while (isSorted==0){

        int localIsSorted=1; // 1 means is sorted, 0 means it had to be sorted

        for(loopCounter=0; loopCounter<length-1; loopCounter++){
            if( sortedArray1[loopCounter] > sortedArray1[loopCounter+1] ){
                localIsSorted=0;
                // swap
                temp = sortedArray1[loopCounter];
                sortedArray1[loopCounter] = sortedArray1[loopCounter+1];
                sortedArray1[loopCounter+1] = temp;
            }
        }
        if(localIsSorted == 1) isSorted=1;

    }

    // print the 2 arrays
    printf("The original array is: \n");
    for(loopCounter=0; loopCounter<length; loopCounter++){
        printf(" %d ",array1[loopCounter]);
    }
    printf("\nThe sorted array is: \n");
    for(loopCounter=0; loopCounter<length; loopCounter++){
        printf(" %d ",sortedArray1[loopCounter]);
    }
    */

//________________________________________________________________________1______
//                                                                        2
    /*
    // -2- Time Header Examples
     clock_t start, end; // instanitating the time functionality

     volatile long unsigned counter; // volatile: quick, unsigned: only positive

    // start timer
     start = clock();


    // #### iNSERT TEST CODE HERE #####
    for(counter=0; counter<500000000; counter++){
        // Do nothing
    }


    // stop timer
     end = clock();


     double res= (double) (end - start) / CLOCKS_PER_SEC;
     printf("\n\nThe operation used %e seconds. \n", res );
     // End of Program -2-
     */

//________________________________________________________________________2______
//                                                                        3


    // -3- Program describes basics of Pointers
    int a;  // Has an address. Its value is an integer.
    int *p; // Has an address. Its value is another address.

    a=7; *p=&a;

    printf("The address of a is %d\n", &a);
    printf("The value of a is %d\n", a);
    printf("The address of p is %d\n", &p);
    printf("The value of p is %d\n", p);
    // End of Program -3-


    return 0;
}
