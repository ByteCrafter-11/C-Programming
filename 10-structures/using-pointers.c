#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

int main (void) {
    struct Student s;
    struct Student *ptr = &s;

    printf("Enter roll number: ");
    scanf("%d", &ptr-> roll);

    printf("Enter marks: ");
    scanf("%f", &ptr-> marks);

    printf("\nStudent Details:\n");
    printf("Roll: %d\n", ptr-> roll);
    printf("Marks: %.2f\n", ptr-> marks);

    return 0;
}

