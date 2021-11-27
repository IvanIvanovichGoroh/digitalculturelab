//2
#include <stdio.h>
#include <math.h>

int main() {
    float a, z1, z2;

    scanf("%f", &a);

    z1 = (pow((((1 + a + pow(a, 2))/(2 * a + pow(a, 2))) + 2 - ((1 - a + pow(a, 2)) / (2 * a - pow(a, 2)))), -1)) * (5 - 2 * pow(a, 2));
    z2 = (4 - pow(a, 2)) / 2;
    printf("%f %f", z1, z2);
}
