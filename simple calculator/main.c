#include <stdio.h>
#include <stdlib.h>

int main()
{
    // variables and data types
    double a;
    double b;
    char op=0;

    //asking them for their numbers
    printf("Enter your first number\n");
    scanf("%lf",&a);
    printf("Enter your second number\n");
    scanf("%lf",&b);
    // what operation do they want
    printf("Pick one operation\n");
    printf("+ \n");
    printf("- \n");
    printf("/ \n");
    printf("* \n");
    scanf(" %c",&op);
switch(op){
case '+':
    printf(" Result: %lf\n",a + b);break;
case '-':
        printf(" Result: %lf\n",a - b);break;
case '/':
        printf(" Result: %lf\n",a / b);break;
case '*':
        printf(" Result: %lf\n",a * b);break;
default: printf("Error! '%c' is an invalid operator!\n");

}



    return 0;
}
