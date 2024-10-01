#include <stdio.h>

void call_by_value(int a) {
    a = 10;
    printf("Call by Value: a = %d\n", a);
}

void call_by_reference(int *a) {
    *a = 10;
    printf("Call by Reference: a = %d\n", *a);
}

int main() {
    int x = 5;
    printf("Before: x = %d\n", x);
    call_by_value(x);
    printf("After Call By Value: x = %d\n", x);
    call_by_reference(&x);
    printf("After Call By Reference: x = %d\n", x);
    return 0;
}