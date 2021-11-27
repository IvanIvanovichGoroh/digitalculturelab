//3
#include <stdio.h>
int main()
{
    unsigned int a, b;

    printf("octal input: \n");
    scanf("%o", &a);
    printf("hexadecimal output: %x\n", a);
    printf("octal output: %o\n", a << 3);
    printf("Negative a output: %x\n", ~a);
    printf("new octal value: \n");
    scanf("%o", &b);
    printf("and: %o", a && b);
    return 0;
}
