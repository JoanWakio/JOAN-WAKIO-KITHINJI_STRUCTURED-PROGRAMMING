#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declare variables
    int pin=2026;
    int givenpin;
    int choice;
    int correct = 0;

    //prompt user
    printf("Hello, please provide your PIN to access device menu\n");
    scanf("%d", &givenpin);
     if(givenpin==pin){
         correct=0;

         printf(" Access granted\n");

    //show the devices menu
    // introduce loop so that if any option other than 4 is input they return to the device menu

    printf("1. Change my username\n");
    printf("2.  Open the door\n");
    printf("3.  Change my PIN\n");
    printf("4. Exit Menu startup\n");
    printf("Enter option by use of an integer\n");

    scanf(" %d", &choice);

    //introduce switch case
    switch(choice){
case 2:
    printf("Open Sesame\n");break;
case 3:
    printf("Feature has not yet been launched\n");break;
case 1:
    printf ("Feature has not yet been launched\n");break;
case 4:
    printf("Exiting Menu Startup\n");break;
default:
    printf("Invalid Option\n");break;
    }}

    else{
        printf("Access Denied");
    }








    return 0; }

