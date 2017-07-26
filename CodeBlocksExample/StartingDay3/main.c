// -1- Program creates matrix with user input
// -2A- Program transposes a 3x3 matrix
// -3B- Program transposes any square matrix
// -4C- Program prints chars onto screen
// -5D- Program repeats 4C but prints in reverse
// -6E- Program prints Pascal's triangle to specified row

#include <stdio.h>

int main(){

    // -1- Program creates matrix with user input
    // Let user define the size of the matrix
    /*int rows, cols;
    printf("We are going to create and display a matrix.\n Please enter the amount of rows: \n");
    scanf("%d", &rows);
    printf(" Please enter the amount of columns: \n");
    scanf("%d", &cols);
    // Declare matrix
    float matrix1[rows][cols];
    // Get input data from user
    int count1, count2;
    for (count1=0; count1<rows; count1++){
        for (count2=0; count2<cols; count2++){
            printf("Please enter the value for the position %d, %d in the matrix: \n", (count1+1),(count2+1) );
            scanf( "%f", &matrix1[count1][count2] );
        }
    }
    // Display the matrix
    printf("\nDisplaying the matrix: \n");
    for (count1=0; count1<rows; count1++){
        for (count2=0; count2<cols; count2++){
            printf("%f ", matrix1[count1][count2]);
        }
        printf("\n");
    }
    */

//________________________________________________________________________1____
//                                                                        2A

    /*
    // -2A- Program transposes a hard coded 3x3 matrix
    int matrix2[3][3];
    int rcount, ccount;
        // Displaying original matrix
        printf("The original matrix is: \n");
        for (rcount=0; rcount<3; rcount++){
            for (ccount=0; ccount<3; ccount++){
                matrix2[rcount][ccount] = rcount+1;
                printf("%d  ", matrix2[rcount][ccount] );
            }
            printf("\n");
        }
        // Transposing matrix onto new matrix
        int matrix21[3][3];
        for (rcount=0; rcount<3; rcount++){
            for (ccount=0; ccount<3; ccount++){
                matrix21[rcount][ccount] = matrix2[ccount][rcount];
            }
        }
        // Display the new matrix
        printf("\nThe NEW matrix is: \n");
        for (rcount=0; rcount<3; rcount++){
            for (ccount=0; ccount<3; ccount++){
                printf("%d  ", matrix21[rcount][ccount]);
            }
            printf("\n");
        }
    // End of Program 2: Transpose Hard Coded Matrix
    */

//________________________________________________________________________2A___
//                                                                        3B

    /*
    // -3B- Program transposes any square
        // Set up matrix
        int size, r,c;
        printf("Give me a size for the matrix:\n");
        scanf("%d", &size);
        printf("The original matrix is: \n");
        int matrixO[size][size];
        for (r=0; r<size; r++){
            for(c=0; c<size; c++){
                matrixO[r][c] = r+1;
                printf("%d  ", matrixO[r][c] );
            }
            printf("\n");
        }
        // Transpose the matrix and display
        printf("The new Matrix is: \n");
        int matrixNew[size][size];
        for (r=0; r<size; r++){
            for(c=0; c<size; c++){
                matrixNew[r][c] = matrixO[c][r];
                printf("%d  ", matrixNew[r][c]);
            }
            printf("\n");
        }
    // End of Program -3B- Transpose any matrix
    */

//__________________________________________________________________________3B___
//                                                                          4C

    /*
    // -4C- Program prints chars onto screen
    char letter=65; int nStop, rcount, ccount;
    printf("Enter in a row to stop: \n"); scanf("%d", &nStop);printf("\n\n");
    for(rcount=1; rcount<=nStop; rcount++){
        for(ccount=65; ccount<rcount+65; ccount++){
            letter = ccount;
            printf("%c  ", letter);
        }
        printf("\n");
    }
    // End of Program -4C-
    */

//___________________________________________________________________________4C___
//                                                                           5D

    /*
    // -5D- Program prints chars onto screen
    char letter=65; int nStop, rcount, ccount;
    printf("Enter in a row to stop: \n"); scanf("%d", &nStop);printf("\n\n");
    for(rcount=1; rcount<=nStop; rcount++){
        for(ccount=64+rcount; ccount>=65; ccount--){
            letter = ccount;
            printf("%c  ", letter);
        }
        printf("\n");
    }
    // End of Program -5D-
    */

//____________________________________________________________________________5D___
//                                                                            6E

    // -6E- Program prints Pascal's triangle to specified row
        // Step 1: get the stop row
            int rowStop;
            printf("Enter in the amount of rows for Pascal's Triangle: "); scanf("%d", &rowStop);
        // Step 2: Create Matrix
            // Declaring variables
            int pascal[rowStop][rowStop], rowCount, colCount;
            // Populating Matrix
            for(rowCount=0; rowCount<rowStop; rowCount++){
                for(colCount=0; colCount<=rowCount; colCount++){
                    // Ends of Matrix
                    if(colCount==0 || colCount==rowCount)
                        pascal[rowCount][colCount]=1;
                    else
                        pascal[rowCount][colCount] = pascal[rowCount-1][colCount-1] + pascal[rowCount-1][colCount];
                }                   // end of inner loop
            }                       // end of outer loop
        // Step 3: Printing Matrix
            printf("\nPascal's Triangle: \n\n");
            for(rowCount=0; rowCount<rowStop; rowCount++){
                for(colCount=0; colCount<=rowCount; colCount++){
                    printf("%d  ", pascal[rowCount][colCount]);
                }                   // end of inner loop
                printf("\n");
            }                       // end of outer loop
    // End of Program -6E- Pascal's Triangle




    return 0;
}
