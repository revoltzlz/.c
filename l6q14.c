#include <stdio.h>
#include <string.h>

void ImprimeGols(char *timeA, char *timeB, int m, int n, char *sequencia) {
    // condição de parada: não há mais gols do A
    if(m == 0) {
        printf("%s", sequencia);
        for(int i = 0; i < n; i++){
            printf("%s ", timeB);
        }
        printf("\n");
        return;
    }

    // condição de parada: não há mais gols do B
    if(n == 0) {
        printf("%s", sequencia);
        for(int i = 0; i < m; i++){
            printf("%s ", timeA);
        }
        printf("\n");
        return;
    }

    // passo recursivo: marca gol do A
    char novaSeq[100];
    sprintf(novaSeq, "%s%s ", sequencia, timeA);
    ImprimeGols(timeA, timeB, m - 1, n, novaSeq);

    // passo recursivo: marca gol do B
    sprintf(novaSeq, "%s%s ", sequencia, timeB);
    ImprimeGols(timeA, timeB, m, n - 1, novaSeq);
}

int main(){
    char timeA[50], timeB[50];
    int m, n;
    scanf("%s", timeA);
    scanf("%s", timeB);
    scanf("%d", &m);
    scanf("%d", &n);
    ImprimeGols(timeA, timeB, m, n, "");
    return 0;
}