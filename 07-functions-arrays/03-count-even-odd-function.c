#include <stdio.h>

void countEvenOdd(int arr[], int n) {
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else 
            odd++;
    }
    printf("Even = %d, Odd = %d\n", even, odd);

}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    countEvenOdd(arr,n);
    return 0;
}
