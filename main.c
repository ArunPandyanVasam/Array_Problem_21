#include <stdio.h>
#define SIZE 100
int main(void) {
    //  21. Write a program in C for the multiplication of two square matrices.
    int r1, c1, r2, c2, arr1[SIZE][SIZE], arr2[SIZE][SIZE], arr3[SIZE][SIZE];

    printf("\nInput the rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("\nInput the rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    printf("\nInput elements in the first matrix: ");
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            printf("\nElement - [%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\nInput elements in the second matrix: ");
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            printf("\nElement - [%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("The First matrix is: \n");
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("The Second matrix is: \n");
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }


    int sum;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            sum = 0;
            for (int k = 0; k < c1; ++k) {
                sum = sum + arr1[i][k] * arr2[k][j];
                arr3[i][j] = sum;
            }
        }
    }

    printf("\nThe multiplication of two matrices is: \n");
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }



    return 0;
}