#include <stdio.h>
#include <string.h>

int main(void) {
    char str[] = "Hello";
    int len = strlen(str);
    char *start = str;
    char *end = str + len -1;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);
    return 0;

}
