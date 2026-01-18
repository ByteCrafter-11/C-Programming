#include <stdio.h>

void evenOdd(int n)
{
    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    evenOdd(num);
    return 0;
}
