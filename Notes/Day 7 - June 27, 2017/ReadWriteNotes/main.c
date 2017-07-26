// Input Output of a file

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // OPEN and READ
    FILE * fPointer;
    fPointer = fopen("Read.txt", "r");
    char singleLine[150];

    while( !feof(fPointer) ){
        fgets(singleLine, 150, fPointer);
        puts(singleLine);
    }

    fclose(fPointer);

    // APPEND
//    FILE *fPoint;
//    fPoint = fopen("Read.txt", "a");
//
//    fprintf(fPoint, "\nBy Me\nP.S. DONT PUSH THE RED TRIANGLE!!!");
//
//    fclose(fPoint);

    // RANDOM ACCESS FILES
    FILE * fPointe;
    fPointe = fopen("Read.txt", "w+"); // open file for writing first and then read it.
    fputs("Its going to be all right. \nUnits responding...", fPointe);

    fseek(fPointe, 7, SEEK_SET); // "7" must be tracked. if want to go back, must use a negative number
                                 // NOTE: overwrites anything after it.
    fputs("ng to be all right. \nConfiramtion 30-2\nUnits Responding...", fPointer);



    return 0;
}
