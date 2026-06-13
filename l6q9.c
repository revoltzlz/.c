#include <stdio.h>
int tamanho_string(char str[]){
    printf("%s", str);
    int tam=0;
    while(str[tam] != '\0'){
        tam++;
    }
    return tam;
}
int main(){
    char str[100];
    scanf("%s", str);
    int resultado = tamanho_string(str);
    printf("\nTamanho: %d", resultado);
    return 0;
}