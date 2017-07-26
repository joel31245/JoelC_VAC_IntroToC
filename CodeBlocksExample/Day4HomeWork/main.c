#include <stdio.h>

int arr1[] = {1,2,3};
int *ptr;


void swap(int *x, int *y){
    int temp;

    printf("   x=%d  y=%d\n", *x, *y);
    temp = *x;
    *x = *y;
    *y = temp;
    printf("   x=%d  y=%d\n", *x, *y);

}

int main()
{

    int a = 44, b=77;

    printf("a=%d  b=%d\n", a, b);
    swap( &a, &b);
    printf("a=%d  b=%d\n", a, b);


    int n;
    printf("\n\nEnter in an even number for an nxn matrix: \n");
    scanf("%d",&n);
    char c1;
    printf("Enter in a char to print: ");
    scanf(" %c",&c1);
    char c2;
    printf("Enter in a char to print: ");
    scanf(" %c",&c2);
    char c3;
    printf("Enter in a char to print: ");
    scanf(" %c",&c3);
    char c4;
    printf("Enter in a char to print: ");
    scanf(" %c",&c4);

    //loops
    // try matrix and print later
    int i,j;
    for(i=0; i<n/2; i++){
        for(j=0; j<n/2; j++){ // top left
            printf("%c",c1);
        }
        for(j=0; j<n/2; j++){ // top right
            printf("%c",c2);
        }
        printf("\n");
    }
    for(i=n/2; i<n; i++){
        for(j=0; j<n/2; j++){ // bottom left
            printf("%c",c3);
        }
        for(j=0; j<n/2; j++){ // bottom right
            printf("%c",c4);
        }
        printf("\n");
    }

    ptr = &arr1[0];
    printf("\n");

    for(i=0; i<3; i++){
        printf("A) arr[%d] = %d", i, *(ptr+i));
        printf("\n");
        printf("B) arr[%d] =  %d",i,*ptr++);
        printf("\n");
    }

    return 0;
}

