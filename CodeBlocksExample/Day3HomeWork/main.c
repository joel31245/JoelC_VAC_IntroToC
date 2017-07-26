// -A-  -B-  Program takes a string and reverses it.
// ERROR: RUNTIME, second print of reverseEntry comes back with weird chars after it.
// -C- Anagram Detection

#include <stdio.h>
#include <string.h>

int main(){

    /*
    // -A-  -B-  Program takes a string and reverses it
    char entry[50];

    printf("Enter in a String: \nWARNING: Do not enter in more than 50 characters please.\n");
    gets(entry);

    int len, loopCounter;
    len = strlen(entry);
    printf("len is %d\n",len);
    char reverseEntry[50];

    for(loopCounter=0; loopCounter<len; loopCounter++){
        reverseEntry[loopCounter] = entry[len-loopCounter-1];
    }

    printf("You entered: %s\n", entry);
    printf("The reverse is: %s\n", reverseEntry);
    // Why is there a runtime error with the reverseEntry???
    // END OF PROGRAM -A-  -B-
    */

//_____________________________________________________________________________________________B______________
//                                                                                             C

    // -C- Program Detects Anagram
// Step 1: Get the 2 strings
    printf("Input 1st word\nWARNING: Do not enter more than 50 characters please.\n");
    char first[50];
    gets(first);
    printf("\nInput 2nd word\nWARNING: Do not enter more than 50 characters please.\n");
    char second[50];
    gets(second);

// Step 2/4: Compare Length of both strings
    int isAnagram; // NOTE: although it is an int, treated like a boolean. 0=false; 1=true;

    if( strlen(first)!=strlen(second) )
        isAnagram = 0;
    else{
// Step 3/4: Count how many times within its own self the first, then second, then ... char is present
//           Then compare that to the amount of that char in the second entry. If equal then we good, if not then its bad.
        int countCharAmountInString1=0;
        int countCharAmountInString2=0;
        int loopCounter, lcount2;
        // first loop selects a letter of the first word"
        for(loopCounter=0; loopCounter<strlen(first); loopCounter++){

            countCharAmountInString1=0;
            countCharAmountInString2=0;

            // second loop compares the checking letter to the amount of times it appears in both words
            for(lcount2=0; lcount2<strlen(first); lcount2++){
                // first if statement checks the amount of occurences in the first word
                if(first[loopCounter] == first[lcount2] )
                    countCharAmountInString1++;
                // second if statement checks the amount of occurences in the second word
                if(first[loopCounter] == second[lcount2] )
                    countCharAmountInString2++;
            }

            // if statement determines if the characters are the same
            if(countCharAmountInString1 != countCharAmountInString2){
                isAnagram=0;
                break;
            }
            else
                isAnagram=1;

        }     // end of loop "running through each letter of the first word" (End of STEP 3/4)
    }         // end of else statement
    // end of all checks for the anagram

 // Step 4/4: Display if it is or isn't an anagram
    if(isAnagram==0)
        printf("\nThe 2 entries: '%s' and '%s' are NOT anagrams.",first,second);
    else
        printf("\nCongratulations! The 2 entries: '%s' and '%s' are anagrams.",first,second);
    // End of Program C: Check if Anagram

//_____________________________________________________________________________________________C______________
//                                                                                             D

    // -D- Program
// Step 1: Create random word
    char word[50];
    char letter;
    char line[50];

    int loopCounter;

    for(loopCounter=0; loopCounter<(rand()%50)+1; loopCounter++)
        letter = ( rand()%26 )+65;



    return 0;
}
