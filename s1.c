#include <stdio.h>
#include <stdbool.h>

bool isNumericConstant(const char* input) {
    int length = strlen(input);
    int i = 0;

    if (input[i] == '+' || input[i] == '-')
        i++;

    bool hasDigits = false;
    for (; i < length && isdigit(input[i]); i++) {
        hasDigits = true;
    }


    if (input[i] == '.') {
        i++;

        if (!hasDigits && !isdigit(input[i]))
            return false;

        for (; i < length && isdigit(input[i]); i++) {
        }
    }

    if (tolower(input[i]) == 'e') {
        i++;

        if (input[i] == '+' || input[i] == '-')
            i++;

        if (!isdigit(input[i]))
            return false;

        for (; i < length && isdigit(input[i]); i++) {
        }
    }


    return i == length;
}

int main() {
    char input[100];

    printf("Enter the input: ");
    scanf("%s", input);

    if (isNumericConstant(input)) {
        printf("The input is a numeric constant.\n");
    } else {
        printf("The input is not a numeric constant.\n");
    }

    return 0;
}

