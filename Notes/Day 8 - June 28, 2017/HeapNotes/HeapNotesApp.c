#include <stdio.h>
#include <stdlib.h>

float average( float array[], int length );

int main(){

    int i, howMany;
    int total;
    float avg = 0.0;
    float* pointsArray;

    // INPUT
    printf("How many numbers to enter to find average of? \n ");
    scanf("%d", &howMany);

    pointsArray = (float *) malloc(howMany * sizeof(float) );

    printf("Enter them boss! \n");

    for( i=0; i<howMany; i++){
        scanf("%d", &pointsArray[i]);
        total+=pointsArray[i];
    }
    avg = (float)total / (float)howMany;

    // FUNCTION CALL AND DISPLAY
    printf("Average is %f", avg );

    return 0;
}

float average( float array[], int length ){
    int i; float total=0;

    for( i=0; i<length; i++ ){
        total+=array[i];
    }

    return (float)total / (float)length;
}
