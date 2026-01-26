#include <stdio.h>

int main(){
    int arr[] = {10,20,30,40,50};
    int n = 5;

    int *start = arr;
    int *end = arr + n -1;

    printf("Original array:\n");
    for (int i = 0; i < n; i++)
        printf("%d", arr[i]);
    printf("\n");

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reveversed array:\n");
    for ( int i = 0; i < n; i++)
        printf("%d", arr[i]);
    printf("\n");

    return 0;
}
