#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    float d;

    // Reading the coordinates
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    // Calculating the distance
    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Printing the distance
    printf("%f", d);

    return 0;
}
