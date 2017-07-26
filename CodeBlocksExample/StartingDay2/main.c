// Program shows the use of Basic and Upper Level Math Operations
// Also introduces for loops

#include <stdio.h>
#include <math.h>

int main()
{
    // Initial display
    int a=10, b=15, c;
    printf("A is %d,   B is %d\n", a,b);

    // BASIC LEVEL MATH
    // Adding
    c = a+b;
    printf(" 1 - The result of A plus B is %d\n", c);
    // Subtracting
    c = a; c-=b;
    printf(" 2 - The result of A minus B is %d\n", c);
    // Multiplication
    c = a; c*=b;
    printf(" 3 - The result of A times B is %d\n", c);
    // Division
    float d = a; d/=b;
    printf(" 4 - The result of A divided by B is %f\n", d);

    // UPPER LEVEL MATH
    // character declaration
    char c1[] = "abcd";
    char c2[5] = "abcd";
    char c3[] = {'a','b','c','d','\0'};
    char c4[5] = {'a','b','c','d','\0'};
    // Numbers, Declarations and init
    const double e = 2.718281828459;
    double irrational;
    int fingers, i;
    long int fact = 1;
    // Compute
    fingers = 5;
    irrational = sqrt(2.0);

    //LOOPS
    for(i=1; i<11; i++){
        fact*=i;
        // printf(" %d - The factorial stepwise is: %d", i,fact);
    }
    //Input Output
    printf("\nStrings: %s %s %s %s\n", c1, c2, c3, c4);
    printf("The factorial of 10 is %ld", fact);


    return 0;
}
