#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int b[3][3], c[3][3], sum[3][3],sub[3][3],mul[3][3];

    // Input first matrix
    printf("Enter elements of the first matrix (b):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of the second matrix (c):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("c[%d][%d] = ", i, j);
            scanf("%d", &c[i][j]);
        }
    }

    // Display first matrix
    printf("\nMatrix b:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    // Display second matrix
    printf("\nMatrix c:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    // Add the matrices
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum[i][j] = b[i][j] + c[i][j];
        }
    }

    // Display result of addition
    printf("\nSum of matrices (b + c):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }


    // subtract the matrices
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sub[i][j] = b[i][j] - c[i][j];
        }
    }

    // Display result of subtraction
    printf("\nSubtraction of matrices (b - c):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }
    
    
    // Multiplication of the matrices
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            mul[i][j] = b[i][j] * c[i][j];
        }
    }

    // Display result of multiplication
    printf("\nMultiplication of matrices (b * c):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}

