#include <stdio.h>
#include <math.h>

// Find roots of a quadratic equation (ax^2 + bx + c = 0)

int main() {
    float a, b, c, d, root1, root2, real, imag;

    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check if a is 0 (not a quadratic equation)
    if (a == 0) {
        printf("Not a quadratic equation\n");
        return 0;
    }

    // Discriminant
    d = b*b - 4*a*c;

    if (d > 0) {
        // Real and distinct roots
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and distinct:\n");
        printf("Root1 = %.2f, Root2 = %.2f\n", root1, root2);
    }
    else if (d == 0) {
        // Real and equal roots
        root1 = root2 = -b / (2*a);
        printf("Roots are real and equal:\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    }
    else {
        // Complex roots
        real = -b / (2*a);
        imag = sqrt(-d) / (2*a);
        printf("Roots are complex:\n");
        printf("Root1 = %.2f + %.2fi\n", real, imag);
        printf("Root2 = %.2f - %.2fi\n", real, imag);
    }

    return 0;
}