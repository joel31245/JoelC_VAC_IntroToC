// Program appends multiple lines

#include <stdio.h>
#include <string.h>

#define LINES 100
#define MaxLLength 100

int main(){

    printf("Program appends multiple lines.\n\n");
    FILE *file;

    // Open File
    char fileName[50];
    printf("Please enter the file you want to display: ");
    scanf(" %s", fileName);
    file = fopen(fileName, "a");
    int add;
    printf("Please enter number of lines to add: ");
    scanf("%d", &add);
    int c=0; // loop counter
    char addition[add][MaxLLength];
    for( c=0; c<add; c++ ){
        printf("Please enter the new line no. %d: ",c+1);
        scanf("%s",addition[c]);
    }

    // Append Lines
    int j=0;
    for( j=0; j<add; j++ )
        fprintf(file, "%s\n", addition[j]);

    // Print File   NOTE: i now stores the amount of lines from the text doc
    fclose(file);
    file = fopen(fileName, "r");
    int i=0;
    char entireDoc[LINES][MaxLLength];
    while ( fgets(entireDoc[i], MaxLLength, file) ){
        // add '\0' char at end of each line
        entireDoc[i][ strlen(entireDoc[i])-1 ] = '\0';
        i++;
    }
    for( j=0; j<i; j++){
        printf("%s\n", entireDoc[j]);
    }

    return 0;
}
