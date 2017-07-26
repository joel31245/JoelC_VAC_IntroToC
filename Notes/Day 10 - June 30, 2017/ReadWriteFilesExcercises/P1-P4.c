#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// PROBLEM 4 BROKEN

int main()
{
    FILE *fPointer;

    // Problem 1
    fPointer = fopen("test.txt", "w");
    fputs("The file test.txt created successfully...!!", fPointer);
    fclose(fPointer);


    // Problem 2
    fPointer = fopen("test.txt", "r");
    char singleLine[150];
    fgets(singleLine, 150, fPointer);

    //printf(" %s\n", singleLine);
    fclose(fPointer);


    // Problem 3 Write multiple lines
    int lines=0, i;
    fPointer = fopen("test.txt", "w");
    printf("Input lines to be written: \n");
    scanf("%d", &lines);
    for( i=0; i<lines; i++ ){
        fprintf(fPointer, "Test Line %d\n", i+1);
    }
    fclose(fPointer);


    // Problem 4 Read and store multiple lines
    char entireDoc[100][100];
        // opening the file
    char fileName[50];
    printf("Enter file name: ");
    scanf(" %s", fileName);
    fPointer = fopen(fileName, "r");

        // getting the lines
    int j=0; i=0;
    while( fgets( entireDoc[j],100,fPointer ) ){
        // need to add the end of line to line
        entireDoc[j][ strlen(entireDoc[j])-1 ] = '\0';
        j++;
    }
    printf("\nCONTENTS OF FILE %s: \n", fileName);
    int totalLines = i; // finds out how many lines for the for loop display
    for( j=0; j<totalLines; j++ ){
        printf("%s\n", entireDoc[j]);
        printf("Line %d success ... \n", j+1);
    }
    fclose(fPointer);

//
//    // Problem 5 - Number of lines in a text file
//    fPointer = fopen("test.txt", "r"); // declared in P1
//    counts = 0; // declared in P4
//    while( !feof(fPointer) ){
//        fgets(singleLine, 150, fPointer); // declare in P2
//        counts++;
//    }
//    //printf("The lines in the file test.txt: %d", counts-1);
//    fclose(fPointer);
//
//    // Problem 6 - Find Content and Number of Lines in text file
//    fPointer = fopen("test.txt", "r");
//    counts = 0; // declared in P4
//    whileCounter = 0; // declared in P4
//    char entireDocLarge[1024];
//    while( !feof(fPointer) ){ // first loop counts how many rows
//        fgets(singleLine, 150, fPointer); // declared in P2
//        whileCounter++;
//    }
//    fseek(fPointer, 0, SEEK_SET); // reset back to beginning of file
//    while( !feof(fPointer) ){
//        fgets(singleLine, 150, fPointer); // declared in P2
//        counts++;
//        if( counts<whileCounter )
//            strcat(entireDocLarge, singleLine);
//    }
//    printf("\n");
//    puts(entireDocLarge);
//    printf("\nThe amount of lines in this document is: %d\n", counts-1);


    printf("\n\nSuccessful Execution\n");

    return 0;
}
