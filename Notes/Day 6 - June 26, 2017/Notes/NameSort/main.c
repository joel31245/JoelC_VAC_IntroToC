/*
 * C program to read N names, store them in the form of an array
 * and sort them in alphabetical order. Output the given names and
 * the sorted names in two columns side by side.
 */
#include <stdio.h>
#include <string.h>

int main()
{
    /*
    char name[10][8], tname[10][8], temp[8];
    int i, j, n;

    // INPUT
    printf("Enter the value of n \n");
    scanf("%d", &n);
    printf("Enter %d names ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
        strcpy(tname[i], name[i]);
    }

    // ACTUAL COMPARISON
    int i, j; char temp[8];
    for (i = 0; i < n - 1 ; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    // OUTPUT
    printf("\n------------------------------------------\n");
    printf("Input Names\tSorted names\n");
    printf("------------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\t\t%s\n", tname[i], name[i]);
    }
    printf("------------------------------------------\n");
    */

    // INPUT
    char input[10][10]; int amount, i,j; // (i, j are loop variables)
    printf("Enter the amount of names to compare (less than 10): ");
    scanf(" %d", &amount);

    if( amount < 2 ) printf("\nNothing to compare. Program terminating...\n");

    else{

        // CHECK IF ALL ENTRIES ARE DUPLICATES - NOT WORKING
//        int duplicateCheck=0; // will be 0 if all entries are exactly the same
////        for(i=0; i<amount-1; i++){
////            duplicateCheck+=strcmp(input[i], input[i+1]);
////        }
//
//        if(duplicateCheck==0) printf("\nNothing to compare. Program terminating...\n");
//        else{

            for(i=0; i<amount; i++){
                printf("Enter name no. %d: ", i+1);
                scanf(" %s", input[i]);
            }

            // OUTPUT THE ORIGINAL IN A LINE
            printf("Unsorted Names: \n ");
            for(i=0; i<amount; i++)
                printf(" %s ", input[i]);

            // ACTUAL SORTING
            char temp[10];
            int lsel;
            for(i=0; i<amount-1; i++){
                for(j=i; j<amount; j++){
                    for(lsel = 0; lsel<strlen(input[i]); lsel++){
                        if( strcmp( input[i] , input[j] ) == 0 ){
                            continue;
                        }
                        else if ( strncmp( input[i],input[j], lsel+1) > 0){
                            strcpy( temp,input[i] );
                            strcpy( input[i],input[j] );
                            strcpy( input[j],temp );
                            break;
                        }
                    } // end of letter check
                }     // end of second word checking
            }         // end of first word checking

            // DISPLAY SORTED
            printf("\nSorted Names: \n ");
            for(i=0; i<amount; i++)
                printf(" %s ", input[i]);

//        }   // END OF Duplicate Checker ELSE statement - NOT WORKING
    }       // END OF Amount Checker ELSE statement

    // END OF MAIN
    return 0;
}
