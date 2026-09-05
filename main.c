#include <stdio.h>

void enterMatrice(int m[3][3])
{
    int i, j;
    // Input the matrix
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("T[%d][%d] = ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
}

void DisplayMatrice(int m[3][3])
{
   int i,j;
   // Display the matrix
    printf("======= MATRICE =======\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}

void sumRowsColumns(int m[3][3])
{
    int i,j;
    int sum=0;
    // Sum of each column
    for (j = 0; j < 3; j++)
    {
        sum = 0;

        for (i = 0; i < 3; i++)
        {
            sum += m[i][j];
        }

        printf("Sum of column %d = %d\n", j, sum);
    }

    // Sum of each row
    for (i = 0; i < 3; i++)
    {
        sum = 0;

        for (j = 0; j < 3; j++)
        {
            sum += m[i][j];
        }

        printf("Sum of row %d = %d\n", i, sum);
    }

}

void sumMainDiagonal(int m[3][3])
{
    int i, j;
    int sumD = 0;

    // Sum of diagonal
    sumD = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sumD += m[i][j];
            }
        }
    }

    printf("Sum of diagonal = %d\n", sumD);
}


int main()
{
    int T[3][3];
    enterMatrice(T);
    DisplayMatrice(T);
    sumRowsColumns(T);
    sumMainDiagonal(T);
    return 0;
}
