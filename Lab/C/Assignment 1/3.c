#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int start, end;

    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    printf("Prime numbers in the range [%d, %d] are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (is_prime(i)) {
            printf("%d, ", i);
        }
    }
    printf("\n");

    return 0;
}