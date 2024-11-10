#include <stdio.h>
#include <math.h>

int main() {
    float a = 1.5;
    float b = -4.2; 
    int c;
    printf("Enter an integer value: "); // Input value for c
    scanf("%d", &c);
    float d = b * b - 4 * a * c;// Calculating the discriminant
     // checking roots of discriminant
    if (d >= 0) {
        // Calculating the denominator
        float den = pow(a / b, 2) + pow((float)b / c, 2); 
        if (den != 0) {
            // Calculating x1 with the + sign in the numerator
            float x1 = (-b + sqrt(d)) / den;
            // Calculating x2 with the - sign in the numerator
            float x2 = (-b - sqrt(d)) / den;
			           // Print the results
            printf("The results of the formula are: x1 = %.2f and x2 = %.2f\n", x1, x2);
        } else {
            printf("The denominator is zero.\n");
        }
    } else {
        printf("The equation has complex/imaginary roots.\n");
    }
    return 0;
}

