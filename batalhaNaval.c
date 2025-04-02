#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    int lNavio1 = 0;  //Linha Navio 1
    int cNavio1 = 4;   //Coluna Navio 1
    int lNavio2 = 6;  //Linha Navio 2
    int cNavio2 = 9;  //Linha Navio 2

    int i; int j;
    
    int tabuleiro [10][10];   //Criação Tabuleiro
    int navio1[10];            //Criação do navio1 (horizontal)
    int navio2[10];            //Criação do navio2 (vertical)
    
    for (i=0; i<10; i++)              //Inicialização Tabuleiro
        for(j=0; j<10; j++)
            tabuleiro[i][j]=0;




    for (i=0; i<10; i++){   //Inicialização navios com valor 3
        navio1[i] = 3;
        navio2[i] = 3;
    }

    // Adicionando navio 1 (horizontal) no tabuleiro
    
    if(cNavio1 + 3 < 10){        //Verificando se o navio vai respeitar os limites do tabuleiro
        for (j=cNavio1; j<cNavio1+3; j++){  
            if(tabuleiro[lNavio1][j]==0)
                tabuleiro[lNavio1][j] = navio1[j];
            else{
                printf("Sobreposição de navio");
                break;
            }    
                
        }

    }
    else
        printf("Posição inválida! \n");  // Entrada inválida 
                    

    // Adicionando navio 2 (vertical) no tabuleiro

    if(lNavio2 + 3 < 10){        //Verificando se o navio vai respeitar os limites do tabuleiro
        for (i=lNavio2; i<lNavio2+3;i++){  
            if(tabuleiro[i][cNavio2]==0)      
                tabuleiro[i][cNavio2] = navio2[i];
            else{
                printf("Sobreposição de navio");
                break;
            }    
                
        }

    }
    else
        printf("Posição inválida! \n");  // Entrada inválida 


    for(i = 0; i < 10; i++){   // Mostrando o tabuleiro
        for (j=0; j<10; j++)
            printf("%d ", tabuleiro[i][j]);
        printf("\n");
    }

    


    return 0;
}
