#include <stdio.h>

int main(void)
{
    int x = 10;
    int *p = &x;

    printf("x = %d\n", x);
    printf("address of x = %p\n", (void*)&x);
    printf("p points to = %p\n", (void*)p);
    printf("value via pointer = %d\n", *p);

    return 0;
}
