#include <stdio.h>

int main() {
    int a, b, c, d, e, f, g, h;
    int p1, p2, p3, p4, p5, p6, p7;

    printf("Enter first 2x2 matrix:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("Enter second 2x2 matrix:\n");
    scanf("%d %d %d %d", &e, &f, &g, &h);

    // Strassen's 7 multiplications
    p1 = (a + d) * (e + h);
    p2 = (c + d) * e;
    p3 = a * (f - h);
    p4 = d * (g - e);
    p5 = (a + b) * h;
    p6 = (c - a) * (e + f);
    p7 = (b - d) * (g + h);

    printf("\nResultant Matrix:\n");
    printf("%d %d\n", p1 + p4 - p5 + p7, p3 + p5);
    printf("%d %d\n", p2 + p4, p1 - p2 + p3 + p6);

    return 0;
}