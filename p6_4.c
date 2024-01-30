#include <stdio.h>
#include <math.h>

int main()
{
    // ax^2+bx+c=0
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float d = (pow(b, 2) - 4 * a * c);
    if (d > 0)
    {
        float det = pow(d, 0.5);
        float solution_1 = (det - b) / (2 * a);
        float solution_2 = (-det - b) / (2 * a);
        printf("solution1:%f  solution 2:%f", solution_1, solution_2);
    }
    else if (d == 0)
    {
        float det = pow(d, 0.5);
        printf("solution1:%f solution 2:%f", det / (2 * a), -det / (2 * a));
    }
    else
    {
        float det = pow(-d, 0.5);
        // imaginary case
        float part_1 = -b / (2 * a);
        float part_2 = det / (2 * a);
        printf("solution1:%f+%fi solution 2:%f+%fi", part_1, part_2, part_1, -part_2);
    }

    return 0;
}