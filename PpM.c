#include <stdio.h>
#include <math.h>
#define PI 3.1415
#define circleArea(r) (PI * r * r)
int main() {

    int number = 125;

    double cubeRoot = cbrt(number);
    printf("%.2lf\n", cubeRoot);

    double radius = 12.4;
    double area = circleArea(radius);
    printf("%.2lf", area);

    return 0;
}