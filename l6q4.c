#include <stdio.h>

int main() {
    int n;
    printf("Quantos termos? ");
    scanf("%d", &n);

    int a = 1;  // primeiro número do grupo

    for (int i = 0; i < n; i++) {
        int resto = i % 3;  // posição dentro do grupo (0, 1 ou 2)

        if (resto == 0)
            printf("%d ", a);
        else if (resto == 1)
            printf("%d ", a + 3);
        else {
            printf("%d ", a + 3);
            a++;  // só avança "a" depois do 3º elemento
        }
    }

    return 0;
}