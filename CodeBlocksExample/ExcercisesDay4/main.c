#include <stdio.h>

int main(){

    int* pc;
    int c;
    c=22;
    printf("Setting c to 22.\n");
    printf("Address of c : %d\n", &c);
    printf("Value of c: %d\n", c); printf("\n\n");
    pc=&c;
    printf("Setting pc to &c\n");
    printf("Address of pointer pc: %d\n", pc);
    printf("Content of pointer pc: %d\n", *pc); printf("\n\n");
    c=11;
    printf("Setting c to 11 and monitoring pc\n");
    printf("Address of pointer pc: %d\n", pc);
    printf("Content of pointer pc: %d\n", *pc); printf("\n\n");
    *pc=2;
    printf("Setting *pc to 2");
    printf("Address of c : %d\n", &c);
    printf("Value of c: %d\n", c);

    return 0;
}
