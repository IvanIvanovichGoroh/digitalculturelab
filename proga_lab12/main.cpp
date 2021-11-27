//12
#include <stdio.h>
#include <time.h>

int main()
{
    int a;
    int b;
    int c;
    scanf("%d", &a);
    scanf("%d", &b);
    FILE *file;
    file = fopen("fscanf.txt", "w");
    c = a + b;
    fprintf(file, "%d", c);
}