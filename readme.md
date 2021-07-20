# Contador de Instruções - Maior caminho em uma matriz n x n
## Compile
```
make clean
make
make run
```
# Regras para percorrer o caminho

1) Preenche a matriz N x N com números inteiros aleatórios de 0 a 99;

2) Considere a posição Linha 0 e Coluna 0 (0,0) como início;

3) Considere a posição (n, n) como posição final;

4) Percorra a matriz a partir do início, somando a cada passo, o próximo maior valor encontrado;

5) O próximo valor pode ser o que está na mesma linha e imediatamente à direita, imediatamente à esquerda, bem como, o que está na coluna abaixo do numero corrente;

6) Há apenas uma exceção de percurso. Ao chegar na última linha deve-se percorre-la até o fim sem realizar mais migrações para colunas acima. 

7) Andando na matriz conforme as regras acima, qual o maior caminho do início até o final, sabendo-se que a soma das posições representa o tamanho do caminho.

# Como o programa funciona

A matriz é inicializada através de uma função que gera valores aleatórios de 0 a 99. 

É possível ajustar o tamanho da matriz através do #define MAX_SIZE que se encontra no cabeçalho matrix.h.

Após a inicialização inicia-se o percurso através da matriz de acordo com as regras citadas acima. 

Para que não ocorra erros de retorno em mesmo valor (mesma posição) foi utilizado um tracker de caminho através do valor numérico -1.

Durante o procedimento, são percorridos os pontos de interesse (ou seja, de maior valor) dentro da matriz e somados a uma variável que é impressa no fim da execução.

# Respostas para as perguntas apresentadas

1) Qual o custo computacional do algoritmo desenvolvido?

    Calculo do custo computacional:
    
    Considerando o pior caso:

   - MatrixInitialize() = 5n^2 + 4n + 2

   - MatrixPrint() = 5n^2 + 4n + 2

   - MatrixWalk() = 5 + 5*n^2

    Podemos dizer que o custo do algoritmo é da ordem de O (n^2).
    
    

2) Há mais de uma maneira de resolver esse problema?

    Sim. A princípio, tentei realizar um método de DP(DYNAMIC PROGRAMMING) de soma dos valores da matriz do tipo bottom's up porém, apesar de encontrar o caminho de maior valor (inclusive maior do que o encontrado aqui) ele não "jogava" pelas regras propostas.
    Caso tenha interesse, segue o link - https://github.com/diegohat/Grid-Max-Path .

3) Há algum algoritmo famoso em literatura que resolva isso?

    O algoritmo de Dijkstra para o caminho mais curto pode auxiliar na resolução do problema ao inverter os valores positivos para negativos encontrando assim o menor caminho e em seguida trocando o valor da soma final resultando no valor de caminho mais longo (maior valor).
    
    Esse algoritmo só pode ser utilizado caso os valores da matriz não possuam sinal.

    Para uma matriz com valores positivos e negativos o algoritmo de Bellman Ford pode auxiliar na resolução.

