// -1- Program Calculates Simple Interest for a given amount and Time (years) and rate (%)
// -2- Secondary Program Runs For Loop to intake values and then regurgitate them backwards
// -3- Tertiary Program is an Excercise for "for loops"; Make and display a user array
// -4- Program to calculate the sum of first n natural numbers
// -5- Program to calculate the factorial of first n natural numbers

#include <stdio.h>

int main(){
    /*
    // -1- SIMPLE INTEREST CALCULATOR
    // Variable Declaration
    int timeYears;
    float interestRate;
    double principalAmount, simpleInterest;

    // Acquiring Inputs
    printf("Please enter your principle (starting) amount (dollars and cents): \n $");
    scanf("%lf", &principalAmount);
    printf("Please enter the years it compounded interest (integer): \n ");
    scanf("%d", &timeYears);
    printf("Enter the Interest Rate (percent form): \n ");
    scanf("%f", &interestRate);

    // Calculations
    simpleInterest = timeYears*interestRate*principalAmount/100;

    // Output
    printf("The Simple Interest garnered over %d years at %.4f%% is: \n$%.2lf\n\n", timeYears,interestRate, simpleInterest);
    */


    /*
    // -2- ARRAYS w/ LOOPS
    // Declaring the integer array
    int array1[5], i;

    // Input values to the array
    for(i=0; i<5; i++){
        printf(" Enter in 5 integers. Entering integer no. %d\n", i+1);
        scanf("%d", &array1[i]);
    }

    // Output
    printf("The entries in the array backwards is: ");
    for(i=4; i>=0; i--){
        printf(" %d ", array1[i]);
    }
    printf("\n");
    */

    /*
    // -3- ARRAYS Excercises
    // Find the amount of entries in the array from user
    int j, array2[10];
    printf("How many elements in the array (enter a value less than 10): \n");
    scanf("%d", &j);

    // Get values into the array
    int i2;
    for(i2 = 0; i2<j; i2++){
        printf(" Enter in an integer at position no. %d of the array: \n", i2+1);
        scanf("%d", &array2[i2]);
    }
    // Display the values at even indices
    printf("\n The values at even indices are: ");
    for(i2 = 0; i2<j; i2+=2)
        printf(" %d ", array2[i2]);
    */



    // -4- -5- Program to calculate the sum of first n natural numbers
    // Find the n stopping point from the user
    int nStop;
    printf("The stopping point for the nth natural number: \n");
    scanf("%d", &nStop);
    // Compute the running sum
    int i, sum=0; long product = 1;
    for(i=1; i<=nStop; i++){
        sum+=i;
        product*=i;
    }
    printf("\n The sum is %d and the product is %ld.\n",sum,product);
    // Positive integers 1,2,3...n are known as natural numbers




    return 0;
}
