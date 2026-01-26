#include <stdio.h>

int main(void) {
    int a = 10, b = 20;
    int *p1 = &a, *p2 = &b;

    if (*p1 > *p2)
        printf("Largest = %d\n", *p1);
    else
        printf("Largest = %d\n", *p2);
    
        return 0;
}
