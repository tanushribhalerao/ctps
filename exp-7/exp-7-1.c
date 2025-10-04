#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10], i, j, k, m, n, p, q;
    printf("Enter number of m: ");
    scanf("%d", &m);
    printf("Enter number of n: ");
    scanf("%d", &n);
    printf("Enter number of p: ");
    scanf("%d", &p);
    printf("Enter number of q: ");
    scanf("%d", &q);

    if (n != p) // check if multiplication is possible
        printf("Matrix multiplication is not possible\n");

    printf("Enter elements of 1 matrix: "); // input of 1st matrix
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of 2 matrix: "); // input of 2nd matrix
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            c[i][j] = 0;
            {
                for (k = 0; k < n; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
    }

    printf("Multiplication of matrix a and b\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d", c[i][j]);
            {
                printf("\n");
            }
        }
    }

    return 0;
}