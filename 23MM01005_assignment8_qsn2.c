#include <stdio.h>
#include <stdlib.h>

void multiply_matrix(int *a, int *b, int *result, int r1, int c1, int r2, int c2)
{
    if (c1 != r2)
    {
        printf("Matrix cannot be multiplied.\n");
        return;
    }
    int i, j, k;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            *(result + i * c2 + j) = 0;
            for (k = 0; k < c1; k++)
            {
                *(result + i * c2 + j) += *(a + i * c1 + k) * *(b + k * c2 + j);
            }
        }
    }
}

int main()
{
    int r1, c1, r2, c2;
    printf("Enter the dimensions of the first matrix (rows columns): ");
    scanf("%d %d", &r1, &c1);
    int *a = (int *)malloc(r1 * c1 * sizeof(int));
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < r1 * c1; i++)
    {
        scanf("%d", a+i);
    }
    printf("Enter the dimensions of the second matrix (rows columns): ");
    scanf("%d %d", &r2, &c2);
    int *b = (int *)malloc(r2 * c2 * sizeof(int));
    int *result = (int *)malloc(r1 * c2 * sizeof(int));
    if (c1 != r2)
    {
        printf("Cannot multiply matrices. Columns of the first matrix must be equal to rows of the second matrix.\n");
        return 0;
    }
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < r2 * c2; i++)
    {
        scanf("%d", b+i);
    }
    multiply_matrix(a, b, result, r1, c1, r2, c2);
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", *(result + i * c2 + j));
        }
        printf("\n");
    }
    return 0;
}
