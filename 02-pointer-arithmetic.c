#include <stdio.h>

int main() {
    int arr[5] = {10,20,30,40,50};
    int *p = arr; //same as &arr[0]

    printf("Using array indexing:\n");
    for ( int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("\nUsing pointer arithmetic:\n");
    for ( int i = 0; i < 5; i++) {
        printf("*(p + %d) = %d\n", i, *(p + i));
    }

    printf("\nAddresses:\n");
    for (int i = 0; i < 5; i++) {
        printf("Address of arr[%d] = %p\n", i , (void *)(p+i));

    }

    return 0;
}
