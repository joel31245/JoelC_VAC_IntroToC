// Program copies file contents to new file

#include <stdio.h>
#include <string.h>

#define LINES 100
#define MaxLLength 100

int main(){

    printf("Program copies text file to new file.\n\n");
    FILE *file;

    // Open File
    char fileName[50];
    printf("Please enter the file you want to copy: ");
    scanf(" %s", fileName);

    // ReadFile   NOTE: i now stores the amount of lines from the text doc
    file = fopen(fileName, "r");
    int i=0;
    char entireDoc[LINES][MaxLLength];
    while ( fgets(entireDoc[i], MaxLLength, file) ){
        // add '\0' char at end of each line
        entireDoc[i][ strlen(entireDoc[i]) ] = '\0';
        i++;
    }
    fclose(file);

    // New File
    char newFileName[75];
    strcat(newFileName, fileName);
    int j=0; int isExt = 0;
    for( j=0; j<=strlen(newFileName); j++) {
        if( newFileName[j] == '.' ){
            newFileName[j] = '1';
            isExt = 1;
        }
        else if(isExt==1){
            newFileName[j] = fileName[j-1];
        }
    }
    file = fopen(newFileName, "w");
    j=0;
    for( j=0; j<i; j++){
        printf("%s", entireDoc[j]);
        fprintf(file, "%s", entireDoc[j]);
    }

    return 0;
}
