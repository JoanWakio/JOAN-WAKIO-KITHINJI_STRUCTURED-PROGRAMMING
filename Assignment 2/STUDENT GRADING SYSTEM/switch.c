
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

switch(marks){
      case 85 ... 100: {
    printf("%s, %s  has exceeded expectations = A\n", names, reg);break;
}
      case 70 ... 84:{
    printf("%s, %s  is meeting expectations = B\n", names, reg);break;
}
 case 60 ... 69:{
    printf("%s, %s  is approaching expectations = C\n", names, reg);break;
}
default:{
    printf(" %s, %s  has failed = D\n", names, reg);break;
}}
}

    return 0;

}
