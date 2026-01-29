#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter operator ( + - * /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (op == '+')
        printf ("Result: %d\n", a+b);
    else if (op == '-')
        printf ("Result: %d\n", a-b);
    else if (op == '*')
        printf("Result: %d\n", a*b);
    else if (op == '/') {
        if (b !=0)
            printf("Result: %d\n", a/b);
        else    
            printf("Division by zero is not allowed\n");
        
    } else
        printf("Invalid operation\n");

    return 0;
}