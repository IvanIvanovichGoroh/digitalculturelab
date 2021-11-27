//5
#include <stdio.h>

int main() {
    int array[7] = {123, 123, 123, 123, 456, 321, 1};
    for(int i = 0; i < 7; i++)
        printf("%d ", array[i]);
    printf("\n");

    int matrix_1[2][2] = {{1, 2}, {1, 1}};
    int matrix_2[2][2] = {{3, 1}, {0, 2}};
    int matrix_3[2][2];

    matrix_3[0][0] = matrix_1[0][0] * matrix_2[0][0] + matrix_1[0][1] * matrix_2[1][0];
    matrix_3[0][1] = matrix_1[0][0] * matrix_2[0][1] + matrix_1[0][1] * matrix_2[1][1];
    matrix_3[1][0] = matrix_1[1][0] * matrix_2[0][0] + matrix_1[1][1] * matrix_2[1][0];
    matrix_3[1][1] = matrix_1[1][0] * matrix_2[0][1] + matrix_1[1][1] * matrix_2[1][1];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++)
        printf("%d ", matrix_3[i][j]);
    printf("\n");
    }
}
