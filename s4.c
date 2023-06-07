#include <stdio.h>
#include <stdbool.h>


bool isIdentifier(const char* input) {

    if (!isalpha(input[0]) && input[0] != '_') {
        return false;
    }

    for (int i = 1; i < strlen(input); i++) {
        if (!isalnum(input[i]) && input[i] != '_') {
            return false;
        }
    }

    return true;
}

int main() {
    char input[100];

    printf("Enter an identifier: ");
    scanf("%s", input);

    if (isIdentifier(input)) {
        printf("The input is a valid identifier.\n");
    } else {
        printf("The input is not a valid identifier.\n");
    }

    return 0;
}
