///4
#include <stdio.h>

int main(){
    int a, b, c, d;
    b = -50;
    c = 50;
    scanf("%d", &a);
    printf((a >= b) && (a <= c) ? "num in range" : "num out of range");
    printf("\n");

    scanf(" %o", &d);
    printf("%d", (d & 32) == 0 ? 0:1);
};