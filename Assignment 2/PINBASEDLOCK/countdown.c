#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    //declare variables
    int pin=2026;
    int givenpin;
    int choice;
    int correct = 0;
    int attempts;

    //prompt user
    for (attempts =1; attempts<=4; attempts++){
    printf("Hello, please provide your PIN to access device menu\n");
    scanf("%d", &givenpin);
     if(givenpin==pin){
         correct=1;

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
            if(attempts < 4){
        printf("Access Denied!Attempts remaining: %d\n\n", 4 - attempts);
    }
    else{printf("Access denied,You have used all your attempts. Account locked!!!\n");
         printf(" SYSTEM COOLDOWN. Please wait 5 seconds to reattempt\n");
    }
    for (int i = 5; i >= 1; i--)
            {
                printf("%d...\n", i);
                Sleep(1000); // Pauses for 1 second
            }
            printf("Cooldown complete!\n");
        }
         }








    return 0;}


