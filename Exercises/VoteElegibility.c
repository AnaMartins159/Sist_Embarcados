#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    age = 0;

    printf("Insert the desired age:\n");
    if (scanf("%d", &age) !=1)
    {
        printf("\nInvalid input!\n\n");
    }
    else
    {
        if(age>=18)
        {
            printf("\nEligible for casting vote\n\n");
        }
        else
        {
            printf("\nNot eligible for casting vote\n\n");
        }
    }
    return(0);
}