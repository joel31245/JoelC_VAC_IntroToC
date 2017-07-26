#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// Program takes in Morse Code and translates it into English Letters and words

// TODO Do the Add all possible Combos and make englishSequence[][] steal from heap,
char morse1LCheck( char morseLetter );
char morse2LCheck( char morseLetter[2] );
char morse3LCheck( char morseLetter[3] );
char morse4LCheck( char morseLetter[4] );
char morse5LCheck( char morseLetter[5] );
char morse6LCheck( char morseLetter[6] );

int main()
{
    // TITLE
    printf("\tMORSE CODE -> ENGLISH TRANSLATOR");
    int runBool=0; // 0 means keep running, 1 means stop the code

    // START OF RUNBOOL LOOP
    while (runBool == 0){
        // Getting Input from user                                                                          // USER INPUT
        printf("Please enter in how many characters of Morse Code you think you have: (Estimate high) (Please Limit to 6) \n\t");
        int bufferSize;
        scanf("%d", &bufferSize); bufferSize+=5;
        char morse[bufferSize];
        printf("Please enter in the Morse Code in dots (.) and dashes (-): \n");
        scanf("%s", morse);

        // Unpacking and Translating the input
        int i=0; int errorFlag=0; // 0 means clear, 1 means invalid input
            // Check for wrong characters                                                                   // FIRST INPUT ERROR CHECK
        for( i=0; i<strlen(morse); i++ ) {
            if (morse[i] != '.' && morse[i] != '-' ){
                errorFlag = 1; break;
            }
        }

            // FIRST INPUT ERROR FLAGGING                                                                   // FIRST INPUT ERROR FLAGGING
        if(errorFlag == 1)
        {
            printf("Invalid Entry.\nTry Again?\n (0 - yes)\n (1 - no)\n");
            errorFlag = 0;
            scanf("%d", &runBool);
        }
        else
        {

                // Declare Morse-English Comparison Vars                                                    // START OF ACTUAL TRANSLATION
            char morseLetter[6]; // Morse Code is 2-6 . or - long in all cases
            char englishLetter[6]; char englishSequence[ (int)pow(2,strlen(morse)) ][bufferSize/2];
                // Initialize all the char to NULL
                // Loop checks each Morse letter to the English version and adds it to the output array
            for( i=0; i<strlen(morse)-1; i++ ){
                // Boundary Conditions and getting the letter itself

                // NEED TO REMAKE THIS SO THERES THE 1s only, 2s only,... and then combinations of each until end. because counter is moving cursor.
                if( -(i)+strlen(morse)==1 ){
                    englishLetter[0] = morse1LCheck(morse[i]);
                }
                else if( -(i)+strlen(morse)<=2 ) {
                    englishLetter[0] = morse1LCheck(morse[i]);
                        morseLetter[0]=morse[i]; morseLetter[1]=morse[i+1];
                    englishLetter[1] = morse2LCheck(morseLetter);
                }
                else if ( -(i)+strlen(morse)<=3 ) {
                    englishLetter[0] = morse1LCheck(morse[i]);
                        morseLetter[0]=morse[i]; morseLetter[1]=morse[i+1];
                    englishLetter[1] = morse2LCheck(morseLetter);
                        morseLetter[2]=morse[i+2];
                    englishLetter[2] = morse3LCheck(morseLetter);
                }
                else if ( -(i)+strlen(morse)<=4 ) {
                    englishLetter[0] = morse1LCheck(morse[i]);
                        morseLetter[0]=morse[i]; morseLetter[1]=morse[i+1];
                    englishLetter[1] = morse2LCheck(morseLetter);
                        morseLetter[2]=morse[i+2];
                    englishLetter[2] = morse3LCheck(morseLetter);
                        morseLetter[3]=morse[i+3];
                    englishLetter[3] = morse3LCheck(morseLetter);
                }
                else if ( -(i)+strlen(morse)<=5 ) {
                    englishLetter[0] = morse1LCheck(morse[i]);
                        morseLetter[0]=morse[i]; morseLetter[1]=morse[i+1];
                    englishLetter[1] = morse2LCheck(morseLetter);
                        morseLetter[2]=morse[i+2];
                    englishLetter[2] = morse3LCheck(morseLetter);
                        morseLetter[3]=morse[i+3];
                    englishLetter[3] = morse3LCheck(morseLetter);
                        morseLetter[4]=morse[i+4];
                    englishLetter[4] = morse3LCheck(morseLetter);
                }
                else {
                    englishLetter[0] = morse1LCheck(morse[i]);
                        morseLetter[0]=morse[i]; morseLetter[1]=morse[i+1];
                    englishLetter[1] = morse2LCheck(morseLetter);
                        morseLetter[2]=morse[i+2];
                    englishLetter[2] = morse3LCheck(morseLetter);
                        morseLetter[3]=morse[i+3];
                    englishLetter[3] = morse3LCheck(morseLetter);
                        morseLetter[4]=morse[i+4];
                    englishLetter[4] = morse3LCheck(morseLetter);
                        morseLetter[5]=morse[i+5];
                    englishLetter[5] = morse3LCheck(morseLetter);
                }
                // Adding the letter to all the possible combinations and sorting out the invalid returns
                int j,k;
                for( j=0; j<6; j++){
                    if( englishLetter[j] == '!') continue;
                    else{
                        for( k=0; k<strlen(englishSequence); k++){
                            if (k%6 == j) englishSequence[k][i] == englishLetter[j];
                            // NOTE: for loop counters can be confusing. k selects the appropriate englishSequence Position to write into
                            //       j selects the correct englishLetter to write in.
                            //       i selects the postition number that the single letter gets written into.
                        }
                    }   // END OF FOR LOOP ADDING LETTER TO EACH POSSIBLITY
                }       // END OF FOR LOOP ADDING LETTER TO EACH POSSIBILITY

            } // END OF FOR LOOP TRANSLATING MORSE
            // print statement


            // Ask to continue or not.
            printf("\nHave more Morse Code to try?\n (0 - yes)\n (1 - no)\n");
            scanf("%d", &runBool);
        }// END OF ELSE (PART OF INPUT ERROR CHECKS


    } // END OF RUNBOOL LOOP

    printf("\nHave a nice day. Good bye!\n")
    return 0;
}     // END OF MAIN

char morse1LCheck( char morseLetter ){
    // Valid Return
    if (morseLetter == '.') return 'E';
    else return 'T';
    // NO INVALID RETURNS POSSIBLE
}
char morse2LCheck( char morseLetter[2] ){
    // Valid Return
    if ( strcmp(morseLetter,".-") == 0) return 'A';
    else if ( strcmp(morseLetter,"..") == 0) return 'I';
    else if ( strcmp(morseLetter,"--") == 0) return 'M';
    else return 'N';
    // NO INVALID RETURNS POSSIBLE
}
char morse3LCheck( char morseLetter[3] ){
    if ( strcmp(morseLetter,"-..") == 0) return 'D';
    else if ( strcmp(morseLetter,"--.") == 0) return 'G';
    else if ( strcmp(morseLetter,"-.-") == 0) return 'K';
    else if ( strcmp(morseLetter,"---") == 0) return 'O';
    else if ( strcmp(morseLetter,".-.") == 0) return 'R';
    else if ( strcmp(morseLetter,"...") == 0) return 'S';
    else if ( strcmp(morseLetter,"..-") == 0) return 'U';
    else return 'W';
    // NO INVALID RETURNS POSSIBLE
}
char morse4LCheck( char morseLetter[4] ){
    if ( strcmp(morseLetter,"-...") == 0) return 'B';
    else if ( strcmp(morseLetter,"-.-.") == 0) return 'C';
    else if ( strcmp(morseLetter,"..-.") == 0) return 'F';
    else if ( strcmp(morseLetter,"....") == 0) return 'H';
    else if ( strcmp(morseLetter,".---") == 0) return 'J';
    else if ( strcmp(morseLetter,".-..") == 0) return 'L';
    else if ( strcmp(morseLetter,".--.") == 0) return 'P';
    else if ( strcmp(morseLetter,"--.-") == 0) return 'Q';
    else if ( strcmp(morseLetter,"...-") == 0) return 'V';
    else if ( strcmp(morseLetter,"-..-") == 0) return 'X';
    else if ( strcmp(morseLetter,"-.--") == 0) return 'Y';
    else if ( strcmp(morseLetter,"--..") == 0) return 'Z';
    else if ( strcmp(morseLetter,".-.-") == 0) return 'Ä';
    else if ( strcmp(morseLetter,"---.") == 0) return 'Ö';
    else if ( strcmp(morseLetter,"..--") == 0) return 'Ü';
    // Invalid Return
    else return '!';
}
char morse5LCheck( char morseLetter[5] ){
    if ( strcmp(morseLetter,".----") == 0) return '1';
    else if ( strcmp(morseLetter,"..---") == 0) return '2';
    else if ( strcmp(morseLetter,"...--") == 0) return '3';
    else if ( strcmp(morseLetter,"....-") == 0) return '4';
    else if ( strcmp(morseLetter,".....") == 0) return '5';
    else if ( strcmp(morseLetter,"-....") == 0) return '6';
    else if ( strcmp(morseLetter,"--...") == 0) return '7';
    else if ( strcmp(morseLetter,"---..") == 0) return '8';
    else if ( strcmp(morseLetter,"----.") == 0) return '9';
    else if ( strcmp(morseLetter,"-----") == 0) return '0';
    else if ( strcmp(morseLetter,".--.-") == 0) return 'Á';
    else if ( strcmp(morseLetter,"..-..") == 0) return 'É';
    else if ( strcmp(morseLetter,"--.--") == 0) return 'Ñ';
    else if ( strcmp(morseLetter,"-.-.-") == 0) return ';';
    else if ( strcmp(morseLetter,"-..-.") == 0) return '/';
    else if ( strcmp(morseLetter,".-.-.") == 0) return '+';
    else if ( strcmp(morseLetter,"-...-") == 0) return '=';
    // Invalid Returns
    else return '!';
}
char morse6LCheck( char morseLetter[6] ){
    if ( strcmp(morseLetter,".-.-.-") == 0) return '.';
    else if ( strcmp(morseLetter,"..--..") == 0) return '?';
    else if ( strcmp(morseLetter,"---...") == 0) return ':';
    else if ( strcmp(morseLetter,"-....-") == 0) return '-';
    else if ( strcmp(morseLetter,"-.--.-") == 0) return '(';
    // Invalid Return
    else return '!';
}

char logic(char morse[][]){
    // Check max case
    if (strlen(morse) <= 6){
        // Outer Loop Goes through every possible combination
        int possCombi=0;
        for ( possCombi=1; possCombi<=pow(2,strlen(morse)); possCombi++ ){
            // First Case, Max Char Usage with least English Letters
            int check = strlen(morse);
            int morseCursor = 0;
            while(check>=1){

            }

        }
    }
    else printf("Please Enter in only 6 chars of Morse Code at a time.");
}
