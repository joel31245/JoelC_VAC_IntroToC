// Program returns the number of lines and the content of a file

// WORD COUNT NOT CATCHING ENDLINES

#include <stdio.h>
#include <string.h>

#define LINES 100
#define MaxLLength 100

int main(){

    printf("Program returns the number of lines and content of a file.\n\n");
    FILE *file;

    // Open File
    char fileName[50];
    printf("Please enter the file you want to display: ");
    scanf(" %s", fileName);
    file = fopen(fileName, "r");

    // Read File
    int i=0; char entireDoc[LINES][MaxLLength];
    while ( fgets(entireDoc[i], MaxLLength, file) ){
        // add '\0' char at end of each line
        entireDoc[i][ strlen(entireDoc[i])-1 ] = '\0';
        i++;
    }

    // Count chars and words
    int a=0, b=0;// loop var counters
    int countWord=0, countChar=0;
    for( a=0; a<i; a++ ){
        for( b=0; b<strlen(entireDoc[a]); b++ ){
            if( entireDoc[a][b] != 32 ){ countChar++; }
            if( entireDoc[a][b] == 32 || entireDoc[a][b] == '\n' ){ countWord++; printf("%c\n", entireDoc[a][b-1]); }
        }
    }

    // Print File   NOTE: i now stores the amount of lines from the text doc
    int j=0;
    printf("%s Contents are: \n", fileName);
    for (j=0;j<i; j++){
        printf(" %s\n", entireDoc[j]);
    }
    printf("\n\n%s has %d words and %d characters.", fileName, countWord, countChar);


    return 0;
}
