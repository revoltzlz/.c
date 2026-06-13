#include <stdio.h>
#include <limits.h>
int main() {
    int vetor[20];
    int n;
    int maior= INT_MIN;
    int posicao;
    for(int i=0; i<20; i++){
        scanf("%d", &n);
        vetor[i]= n;
        if (n>maior){
            maior = n;
            posicao=i;
        }
    }
    printf("O maior numero eh %d e sua posicao eh %d", maior, posicao);
    return 0;
}