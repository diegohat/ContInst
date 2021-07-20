#include "matrix.h"

int main(void)
{
    int matrix[MAX_SIZE][MAX_SIZE]; /*= {6, 18, 7, 8, 9, 3, 1,
                                      27, 45, 50, 6, 5, 1, 2,
                                      21, 32, 44, 35, 0, 9, 22,
                                      15, 11, 7, 45, 4, 18, 7,
                                      4, 9, 19, 10, 6, 89, 11,
                                      23, 23, 27, 1, 91, 77, 6,
                                      33, 28, 34, 18, 19, 96, 1};*/
    int sum;

    srand(time(NULL)); // Gerando uma semente aleatória de acordo com o relógio da máquina

    printf("\n");

    MatrixInitialize(MAX_SIZE, MAX_SIZE, matrix); // Inicializando matriz com valores aleatórios

    printf("Imprimindo uma matriz aleatória...\n\n");

    MatrixPrint(MAX_SIZE, MAX_SIZE, matrix);

    sum = MatrixWalk(MAX_SIZE, MAX_SIZE, matrix); // Somando em sum os valores do caminho e trocando os valores para -1
    printf("\n");

    printf("Trilhando o caminho de valor máximo... (-1)\n\n");

    MatrixPrint(MAX_SIZE, MAX_SIZE, matrix);
    printf("\n");

    printf("Caminho de valor máximo = %i\n", sum);
    printf("\n");

    return 0;
}