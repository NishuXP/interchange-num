#include <stdio.h>

int main() {
    int n, first, last, digits = 1, temp, result;

    printf("Enter an integer: ");
    scanf("%d", &n);

    temp = n;
    last = n % 10;

    while (temp >= 10) {
        temp /= 10;
        digits *= 10;
    }

    first = temp;
    result = n % digits;
    result = result / 10;
    result = last * digits + result * 10 + first;

    printf("Modified number = %d\n", result);

    return 0;
}
