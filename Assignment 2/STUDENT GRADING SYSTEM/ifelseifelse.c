
#include <stdio.h>
#include <stdlib.h>

int main()
{//declare variables
char names[50];
char reg[50];
int marks;
int max;
//prompt lec
printf("Hello, this is the New Grading system. How many students will you be grading today?\n");
scanf("%d", &max);
for (int i = 1; i < max; i++) {
        printf("\n--- Student %d ---\n", i);

printf("please provide the students name\n");
scanf(" %49[^\n]", names);

printf("Please provide the students registration number\n");
scanf(" %49[^\n]", reg);


printf("Please provide the students marks\n");
scanf(" %d", &marks);

if(marks >= 85){
    printf("%s, %s  has exceeded expectations = A\n", names, reg);
}
else if (marks >=70){
    printf("%s, %s  is meeting expectations = B\n", names, reg);
}
else if(marks>=60){
    printf("%s, %s  is approaching expectations = C\n", names, reg);
}
else{
    printf(" %s, %s  has failed = D\n", names, reg);
}
}

    return 0;

}
