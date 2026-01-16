#include <stdio.h>

int main(void)
{
    int a[5];

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("You entered:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}


