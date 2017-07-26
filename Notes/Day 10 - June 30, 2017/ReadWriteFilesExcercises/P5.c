#include <stdio.h>
#include <string.h>

#define LINEMAX 100
#define LINES 100

// P5 returns number of lines in a data text

int main(){

    printf("Program returns number of lines in a text\n");

    FILE *file;
    char fileName[50];
    // Opening the file
    printf("Tell me which file to open and check: \n");
    scanf(" %s", fileName);
    file = fopen(fileName, "r");

    char dummy[150]; int lineCount=0;
    while( fgets( dummy,150,file ) )
        lineCount++;
    printf("The amount of lines in %s is: %d", fileName, lineCount);

    return 0;
}
