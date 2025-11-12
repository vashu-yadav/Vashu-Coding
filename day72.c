
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    float discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        float root1 = (-b + sqrt(discriminant)) / (2*a);
        float root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and different: %.0f, %.0f\n", root1, root2);
    } else if (discriminant == 0) {
        float root = -b / (2*a);
        printf("Roots are real and same: %.0f\n", root);
    } else {
        printf("Roots are complex\n");
    }
    return 0;
}
