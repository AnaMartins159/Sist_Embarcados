#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int age;

    printf("Insert the desired age:\n");
    scanf("%d", &age);

    if(age>=18)
    {
        printf("Eligible for casting vote\n");
    }
    else
    {
        printf ("Not eligible for casting vote\n");
    }

    return(0);
}