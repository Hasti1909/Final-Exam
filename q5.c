// Write a C Program to print total number of days in a month using switch case.

#include <stdio.h>
int main()
{
    do 
    {
        printf("press 1 for Monday \n");
        printf("press 2 for Tuesday \n");
        printf("press 3 for Wednesday \n");
        printf("press 4 for Thursday \n");
        printf("press 5 for Friday \n");
        printf("press 6 for Saturday \n");
        printf("press 7 for Sunday \n");
        printf("press 0 for Exit \n");
        

        int choice;
        printf("Enter your choice:");
        scanf("%d",&choice);
    
    

        switch(choice)
        {
            case 1:
            printf("Monday \n");
            break;

            case 2:
            printf("Tuesday \n");
            break;

            case 3:
            printf("Wednesday \n");
            break;

            case 4:
            printf("Thursday \n");
            break;

            case 5:
            printf("Friday \n");
            break;

            case 6:
            printf("Saturday \n");
            break;

            case 7:
            printf("Sunday \n");
            break;
        
    } 
  } while ("choice!=0 ");
}
