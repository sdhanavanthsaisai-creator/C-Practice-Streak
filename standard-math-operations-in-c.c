#include <stdio.h>
#include <math.h>
#include <stdlib.h> // Recommended for standard absolute value function

int main() {
    int x = 9;
    float y = 4.897;
    float z = 3.14;
    float a = 5.97;
    int b = -6;

    // Applying C math and utility functions
    x = sqrt(x);    // Computes the square root
    y = pow(y, 2);  // Computes y raised to the power of 2
    z = round(z);   // Rounds to the nearest integer
    a = ceil(a);    // Rounds up to the nearest integer
    b = abs(b);     // Computes the absolute value

    // Displaying the results clearly
    printf("Square root (x): %d\n", x);
    printf("Power (y): %f\n", y);
    printf("Rounded (z): %f\n", z);
    printf("Ceiling (a): %f\n", a);
    printf("Absolute value (b): %d\n", b);

    return 0;
}
