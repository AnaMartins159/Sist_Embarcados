#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int age;

    printf("Insert the desired age:\n");
    scanf("%d", &age);

    if(age>=18)
    {
        printf("\nEligible for casting vote\n\n");
    }
    else
    {
        printf("\nNot eligible for casting vote\n\n");
    }

    return(0);
}