#include <stdio.h>
#include <stdlib.h>

int main()
{
 //declare variable
char name[50];
char reg[50];
int marks;
int max;

    printf("Hello Educator.\n");
    printf(" This is the new Student Grading system.How many students' details will you be inputing today?\n");
    scanf("%d", &max);
    for(int i=1; i<=max; i++){
        printf("\n--- Student %d ---\n", i);

    printf("Please provide the students full name.\n");
    scanf(" %s", name);

    printf("Please provide the students registration number.\n");
    scanf("%s", reg);

    printf("Please provide the students Marks.\n");
    scanf("%d", &marks);

     // introduce if-else statements
     if(marks >= 40){
        printf("%s\n%s\n  Has passed the Examination\n", name, reg );
     }
     else{
        printf("%s\n %s\n  Has failed the Examination\n", name, reg );
     }
    }

    return 0;

}
