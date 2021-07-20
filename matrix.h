#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

#define MAX_SIZE 7 // Valor do tamanho da matriz
#define RANDOM_SIZE 100 // Valor máximo aleatório

void MatrixInitialize(const int rows, const int cols, int matrix[rows][cols]);
void MatrixPrint(const int rows, const int cols, int matrix[rows][cols]);
int MatrixWalk(const int rows, const int cols, int matrix[rows][cols]);