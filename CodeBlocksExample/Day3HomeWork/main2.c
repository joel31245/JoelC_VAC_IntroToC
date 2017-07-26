// -C- Program detects anagrams

#include <stdio.h>
#include <strings.h>

int main2(){

    // Step 1: Get the 2 strings
    printf("Input 1st word\nWARNING: Do not enter more than 50 characters please.\n");
    char first[50];
    gets(first);
    printf("\nInput 2nd word\nWARNING: Do not enter more than 50 characters please.\n");
    char second[50];
    gets(second);

    // Step 2: Compare Length of both strings
    int loopCounter1, loopCounter2;
    for(loopCounter1=0; loopCounter1<strlen(first); loopCounter1++)
        continue;
    for(loopCounter2=0; loopCounter2<strlen(second); loopcounter2++)
        continue;
    printf("%d",loopCounter1);


    return 0;
}
