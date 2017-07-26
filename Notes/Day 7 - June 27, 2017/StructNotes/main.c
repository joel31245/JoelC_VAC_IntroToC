// STRUCTURE NOTES

#include <stdio.h>

struct student
{
    char name[50];
    int roll;
    float marks;
};

int main(){
    int i;
    struct student vistas[10];

    // DATA ENTRY
    printf("Enter information about the 10 students...\n");
    for(i=0; i<10; i++){
        printf("\nEnter in name of student no. %d: ", i+1);
        scanf(" %s", &*vistas[i].name);
        printf("Enter in the roll of %s: ", vistas[i].name);
        scanf(" %d", &vistas[i].roll);
        printf("Enter in the marks of %s: ", vistas[i].name);
        scanf(" %f", &vistas[i].marks);
    }

    printf("\n\nStudents Information: \n");
    for(i=0; i<10; i++){
        printf(" %s\t\t%3d\t%3.3f\n", vistas[i].name, vistas[i].roll, vistas[i].marks);
    }


    return 0;
}
