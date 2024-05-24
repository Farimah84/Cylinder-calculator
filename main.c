#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

void calculateCylinderProperties(double radius, double height, double *sideArea, double *baseArea, double *volume) {
    *sideArea = 2 * PI * radius * height;
    *baseArea = PI * radius * radius;
    *volume = PI * radius * radius * height;
}

int main() {
    double radius, height, sideArea, baseArea, volume;

    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    calculateCylinderProperties(radius, height, &sideArea, &baseArea, &volume);

    printf("Side Area: %.2f\n", sideArea);
    printf("Base Area: %.2f\n", baseArea);
    printf("Volume: %.2f\n", volume);

    return 0;
}

