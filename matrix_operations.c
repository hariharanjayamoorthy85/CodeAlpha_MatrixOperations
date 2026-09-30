#include <stdio.h>

#define MAX_SIZE 10

/* Function prototypes */
void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols);
void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols);

void addMatrices(
    int matrixA[MAX_SIZE][MAX_SIZE],
    int matrixB[MAX_SIZE][MAX_SIZE],
    int result[MAX_SIZE][MAX_SIZE],
    int rows,
    int cols
);

void multiplyMatrices(
    int matrixA[MAX_SIZE][MAX_SIZE],
    int matrixB[MAX_SIZE][MAX_SIZE],
    int result[MAX_SIZE][MAX_SIZE],
    int rowsA,
    int colsA,
    int colsB
);

void transposeMatrix(
    int matrix[MAX_SIZE][MAX_SIZE],
    int transpose[MAX_SIZE][MAX_SIZE],
    int rows,
    int cols
);

/* Input matrix elements */
void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
    int i, j;

    printf("Enter matrix elements:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

/* Display matrix */
void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%6d", matrix[i][j]);
        }
        printf("\n");
    }
}

/* Matrix addition */
void addMatrices(
    int matrixA[MAX_SIZE][MAX_SIZE],
    int matrixB[MAX_SIZE][MAX_SIZE],
    int result[MAX_SIZE][MAX_SIZE],
    int rows,
    int cols
)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            result[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
}

/* Matrix multiplication */
void multiplyMatrices(
    int matrixA[MAX_SIZE][MAX_SIZE],
    int matrixB[MAX_SIZE][MAX_SIZE],
    int result[MAX_SIZE][MAX_SIZE],
    int rowsA,
    int colsA,
    int colsB
)
{
    int i, j, k;

    for (i = 0; i < rowsA; i++)
    {
        for (j = 0; j < colsB; j++)
        {
            result[i][j] = 0;

            for (k = 0; k < colsA; k++)
            {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
}

/* Matrix transpose */
void transposeMatrix(
    int matrix[MAX_SIZE][MAX_SIZE],
    int transpose[MAX_SIZE][MAX_SIZE],
    int rows,
    int cols
)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
}

/* Main function */
int main(void)
{
    int matrixA[MAX_SIZE][MAX_SIZE];
    int matrixB[MAX_SIZE][MAX_SIZE];
    int result[MAX_SIZE][MAX_SIZE];
    int transpose[MAX_SIZE][MAX_SIZE];

    int rowsA, colsA;
    int rowsB, colsB;
    int choice;

    do
    {
        printf("\n========================================\n");
        printf("          MATRIX OPERATIONS\n");
        printf("========================================\n");
        printf("1. Matrix Addition\n");
        printf("2. Matrix Multiplication\n");
        printf("3. Matrix Transpose\n");
        printf("4. Exit\n");
        printf("========================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\n--- Matrix Addition ---\n");

                printf("Enter number of rows: ");
                scanf("%d", &rowsA);

                printf("Enter number of columns: ");
                scanf("%d", &colsA);

                if (rowsA <= 0 || rowsA > MAX_SIZE ||
                    colsA <= 0 || colsA > MAX_SIZE)
                {
                    printf("Invalid matrix size.\n");
                    break;
                }

                printf("\nEnter Matrix A:\n");
                inputMatrix(matrixA, rowsA, colsA);

                printf("\nEnter Matrix B:\n");
                inputMatrix(matrixB, rowsA, colsA);

                addMatrices(
                    matrixA,
                    matrixB,
                    result,
                    rowsA,
                    colsA
                );

                printf("\nMatrix A:\n");
                displayMatrix(matrixA, rowsA, colsA);

                printf("\nMatrix B:\n");
                displayMatrix(matrixB, rowsA, colsA);

                printf("\nResult of Addition:\n");
                displayMatrix(result, rowsA, colsA);

                break;

            case 2:
                printf("\n--- Matrix Multiplication ---\n");

                printf("Enter rows of Matrix A: ");
                scanf("%d", &rowsA);

                printf("Enter columns of Matrix A: ");
                scanf("%d", &colsA);

                printf("Enter rows of Matrix B: ");
                scanf("%d", &rowsB);

                printf("Enter columns of Matrix B: ");
                scanf("%d", &colsB);

                if (rowsA <= 0 || rowsA > MAX_SIZE ||
                    colsA <= 0 || colsA > MAX_SIZE ||
                    rowsB <= 0 || rowsB > MAX_SIZE ||
                    colsB <= 0 || colsB > MAX_SIZE)
                {
                    printf("Invalid matrix size.\n");
                    break;
                }

                if (colsA != rowsB)
                {
                    printf(
                        "Matrix multiplication is not possible.\n"
                        "Columns of Matrix A must equal rows of Matrix B.\n"
                    );
                    break;
                }

                printf("\nEnter Matrix A:\n");
                inputMatrix(matrixA, rowsA, colsA);

                printf("\nEnter Matrix B:\n");
                inputMatrix(matrixB, rowsB, colsB);

                multiplyMatrices(
                    matrixA,
                    matrixB,
                    result,
                    rowsA,
                    colsA,
                    colsB
                );

                printf("\nMatrix A:\n");
                displayMatrix(matrixA, rowsA, colsA);

                printf("\nMatrix B:\n");
                displayMatrix(matrixB, rowsB, colsB);

                printf("\nResult of Multiplication:\n");
                displayMatrix(result, rowsA, colsB);

                break;

            case 3:
                printf("\n--- Matrix Transpose ---\n");

                printf("Enter number of rows: ");
                scanf("%d", &rowsA);

                printf("Enter number of columns: ");
                scanf("%d", &colsA);

                if (rowsA <= 0 || rowsA > MAX_SIZE ||
                    colsA <= 0 || colsA > MAX_SIZE)
                {
                    printf("Invalid matrix size.\n");
                    break;
                }

                printf("\nEnter Matrix:\n");
                inputMatrix(matrixA, rowsA, colsA);

                transposeMatrix(
                    matrixA,
                    transpose,
                    rowsA,
                    colsA
                );

                printf("\nOriginal Matrix:\n");
                displayMatrix(matrixA, rowsA, colsA);

                printf("\nTranspose Matrix:\n");
                displayMatrix(transpose, colsA, rowsA);

                break;

            case 4:
                printf("\nExiting Matrix Operations Program...\n");
                break;

            default:
                printf("\nInvalid choice. Please select 1-4.\n");
        }

    } while (choice != 4);

    return 0;
}
