#include <stdio.h>

typedef struct {
    float real;
    float imag;
} complex;

complex add_complex(complex c1, complex c2) {
    complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

complex sub_complex(complex c1, complex c2) {
    complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

void display_complex(complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

int main() {
    complex c1, c2, sum, diff;

    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    sum = add_complex(c1, c2);
    diff = sub_complex(c1, c2);

    printf("Sum: ");
    display_complex(sum);

    printf("Difference: ");
    display_complex(diff);

    return 0;
}
