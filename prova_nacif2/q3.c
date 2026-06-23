#include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);

    int mat[m][m];
    int num = 1;
    int topo = 0, baixo = m-1, esquerda = 0, direita = m-1;

    while (topo <= baixo && esquerda <= direita) {

        // → percorre a linha do topo, da esquerda pra direita
        for (int j = esquerda; j <= direita; j++)
            mat[topo][j] = num++;
        topo++; // linha do topo já foi, sobe a borda

        // ↓ percorre a coluna da direita, de cima pra baixo
        for (int i = topo; i <= baixo; i++)
            mat[i][direita] = num++;
        direita--; // coluna da direita já foi, move pra esquerda

        // ← percorre a linha do baixo, da direita pra esquerda
        for (int j = direita; j >= esquerda; j--)
            mat[baixo][j] = num++;
        baixo--; // linha do baixo já foi, sobe a borda

        // ↑ percorre a coluna da esquerda, de baixo pra cima
        for (int i = baixo; i >= topo; i--)
            mat[i][esquerda] = num++;
        esquerda++; // coluna da esquerda já foi, move pra direita
    }

    // imprime a matriz
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", mat[i][j]);
            if(j<m-1){
                printf(" ");
            }
        }
        
        printf("\n");
        }

    return 0;
    }