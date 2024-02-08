#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2;

    // Input coefficients a, b, and c
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    switch (discriminant > 0) {
        case 1: // Two real and distinct roots
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Root 1 = %f and Root 2 = %f\n", root1, root2);
            break;
        default:
            switch (discriminant == 0) {
                case 1: // One real root
                    root1 = root2 = -b / (2 * a);
                    printf("Root 1 = Root 2 = %f\n", root1);
                    break;
                default: // Two complex roots
                    float realPart = -b / (2 * a);
                    float imaginaryPart = sqrt(-discriminant) / (2 * a);
                    printf("Root 1 = %f + %fi and Root 2 = %f - %fi\n",
                           realPart, imaginaryPart, realPart, imaginaryPart);
                    break;
            }
            break;
    }

    return 0;
}
