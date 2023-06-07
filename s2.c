#include <stdio.h>
#include <stdbool.h>

bool isOperator(char ch) {
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '=') {
        return true;
    }
    return false;
}

int main() {
    char input;

    printf("Enter a character: ");
    scanf("%c", &input);

    if (isOperator(input)) {
        printf("%c is an operator.\n", input);
    } else {
        printf("%c is not an operator.\n", input);
    }

    return 0;
}
