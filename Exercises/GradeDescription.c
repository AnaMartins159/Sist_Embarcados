#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char desc[15];
    char grd;
    char answ, again;

    again = 'Y';

    while (again == 'Y')
    {
        printf("Input the grade (A to F): ");
        scanf(" %c", &grd);

        grd = toupper(grd);

        switch(grd)
        {
            case 'A':
                strcpy(desc, "Excellent");
                break;
            case 'B':
                strcpy(desc, "Very good");
                break;
            case 'C':
                strcpy(desc, "Good");
                break;
            case 'D':
                strcpy(desc, "Regular");
                break;
            case 'E':
                strcpy(desc, "Bad");
                break;
            case 'F':
                strcpy(desc, "Fail");
                break;
            default:
                strcpy(desc,"Not Found");
                break;
        }

        if (strcmp(desc, "Not Found") ==0)
        {
            printf("Invalid grade inserted. \n\n");
        }
        else
        {
            printf("%s grade! \n\n", desc);
        }

        printf("Do you want to insert another grade? (Y/N): ");
        scanf(" %c", &answ);

        if(answ == 'Y')
        {
            again = 'Y';
            printf("\n\n");
        }
        else
        {
            again = 'N';
            printf("\n\n Bye!\n\n");
        }

    }
    
return;
}