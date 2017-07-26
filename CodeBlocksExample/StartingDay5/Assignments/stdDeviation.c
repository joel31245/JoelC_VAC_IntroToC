/* Source code to calculate standard deviation.
 * taken from
 * http://www.programiz.com/c-programming/examples/standard-deviation
 * and modified by Martin Huarte, mhuartee@central.uh.edu, 2015,
 * for educational purposes.
 *
 * P L E A S E    C O M P I L E    W I T H:
 * gcc -o kk stdDeviation.c -lm
 *
 * */

#include <stdio.h>
#include <math.h>
int standardDeviation( float entries[], int n ){
    float mean, sum_deviation, stdDev; // math Variables
    int i; //loop variable

    for(i=0; i<n;++i)
    {
        mean+=entries[i];
    }
    mean=mean/n;
    for(i=0; i<n;++i)
        sum_deviation+=(entries[i]-mean)*(entries[i]-mean);

    stdDev = sqrt(sum_deviation/n);

    return stdDev;
}

int main()
{
    int n, i;
    float mean=0.0, sum_deviation=0.0;
    float data[100];
    // Data Entry
    printf("Enter number of data entries( should not exceed 100): ");
    scanf("%d",&n);
    printf("Enter all elements: ");
    for(i=0; i<n; ++i)
        scanf("%f",&data[i]);
    printf("\n");

    printf("Standard Deviation = %.2f", standardDeviation(data, n) );
    return 0;
}
