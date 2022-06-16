#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char desc[15];
    char grd;
    char answ[2];

    strcpy(answ, "Y");

    while (strcmp(answ, "Y") == 0)
    {
        printf("Input the grade: ");
        scanf("%c", &grd);

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

        if (desc == "Not Found")
        {
            printf("Invalid grade inserted. \n\n");
        }
        else
        {
            printf("%s grade! \n\n", desc);
        }
    
        printf("Do you want to insert another grade? (Y/N)\n");
        scanf("%s", &answ);

    }
    
return;
}