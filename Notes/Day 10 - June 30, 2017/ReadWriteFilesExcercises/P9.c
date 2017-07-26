// Program returns the file with replaced line out

#include <stdio.h>
#include <string.h>

#define LINES 100
#define MaxLLength 100

int main(){

    printf("Program returns the file with replaced line.\n\n");
    FILE *file;

    // Open File
    char fileName[50];
    printf("Please enter the file you want to display: ");
    scanf(" %s", fileName);
    file = fopen(fileName, "r");
    int lineDelete;
    printf("Please enter the line you want to replace: ");
    scanf("%d", &lineDelete);
    printf("Please enter what you would like to replace it with: ");
    char replacement[MaxLLength];
    scanf("%s", replacement);

    // Read File
    int i=0; char entireDoc[LINES][MaxLLength];
    while ( fgets(entireDoc[i], MaxLLength, file) ){
        // add '\0' char at end of each line
        entireDoc[i][ strlen(entireDoc[i])-1 ] = '\0';
        i++;
    }

    // Replace line
    fclose(file);
    file = fopen(fileName, "w");
    int a=0;
    for( a=0; a<i; a++ ){
            if( a!=lineDelete-1 ){ fprintf(file, "%s\n", entireDoc[a]); }
            else { fprintf(file, "%s\n", replacement); }
    }

    // Print File   NOTE: i now stores the amount of lines from the text doc
    fclose(file);
    file = fopen(fileName, "r");
    int j=0; i=0;
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
