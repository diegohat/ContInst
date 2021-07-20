#include "matrix.h"

void MatrixInitialize(const int rows, const int cols, int matrix[rows][cols]) // 2 + 4n + 4n^2 + n^2 == 5n^2 + 4n + 2
{
    for (int i = 0; i < rows; i++) // 2 + 2n
    {
        for (int j = 0; j < cols; j++) //  * (2 + 2n)
        {
            /*if(rand()%RANDOM_SIZE % 2 == 0)
            {
                matrix[i][j] = rand()%RANDOM_SIZE * -1; // Para criar valores negativos, remover comentário
            }
            else*/
            {
                matrix[i][j] = rand() % RANDOM_SIZE; // Criando valores aleatórios positivos // ;
            }
        }
    }
}

void MatrixPrint(const int rows, const int cols, int matrix[rows][cols]) // 5n^2 + 4n + 2
{
    for (int i = 0; i < rows; i++) // 2 + 2n
    {
        for (int j = 0; j < cols; j++) // * (2 + 2n)
        {
            printf("[%i][%i] = %i\t", i, j, matrix[i][j]); // Imprimindo matriz
        }
        printf("\n");
    }
}

int MatrixWalk(const int rows, const int cols, int matrix[rows][cols]) // 5 + 5*n^2
{
    int sum = 0;
    int i = 0; 
    int j = 0;
    sum += matrix[i][j];
    matrix[i][j] = -1;

    while (i != rows && j != cols) // Percorrendo matriz pelos pontos de interesse (maiores valores)
    {
        if (i < rows - 1 && j == 0)
        {
            if(matrix[i][j + 1] >= matrix[i + 1][j] && matrix[i][j + 1] != -1)
            {
                sum += matrix[i][j + 1];
                matrix[i][j + 1] = -1;
                j++;
            }
            else
            {
                sum += matrix[i + 1][j];
                matrix[i + 1][j] = -1;
                i++;
            }
        }
        else if (i < rows - 1 && j == cols - 1)
        {
            if(matrix[i][j - 1] >= matrix[i + 1][j] && matrix[i][j - 1] != -1)
            {
                sum += matrix[i][j - 1];
                matrix[i][j - 1] = -1;
                j--;
            }
            else
            {
                sum += matrix[i + 1][j];
                matrix[i + 1][j] = -1;
                i++;
            }
        }
        else if(i == rows - 1 && j < cols - 1)
        {
            sum += matrix[i][j+1];
            matrix[i][j+1] = -1;
            j++;
        }
        else if(i == rows - 1 && j == cols - 1)
        {
            j++;
        }
        else if(i != rows - 1 && j != cols - 1)
        {
            if(matrix[i][j - 1] > matrix[i + 1][j] && matrix[i][j - 1] > matrix[i][j + 1])
            {
                sum += matrix[i][j - 1];
                matrix[i][j - 1] = -1;
                j--;
            }
            else if(matrix[i + 1][j] > matrix[i][j - 1] && matrix[i + 1][j] > matrix[i][j + 1])
            {
                sum += matrix[i + 1][j];
                matrix[i + 1][j] = -1;
                i++;
            }
            else
            {
                sum += matrix[i][j + 1];
                matrix[i][j + 1] = -1;
                j++;
            }
        }
    }
    return sum;
}