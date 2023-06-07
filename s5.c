#include <stdio.h>

int main() {
    int size, i;
    float sum = 0.0, average;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
        sum += array[i];
    }

    average = sum / size;
    printf("The average value of the elements is: %.2f\n", average);

    return 0;
}
