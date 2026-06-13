#include <stdio.h>
double media(int v[], int tamanho){
    double soma=0;
    double m;
    for(int i=0; i<tamanho; i++){
        soma+=v[i];

    }
    return soma/tamanho;
}
int main(){
    int t;
    scanf("%d", &t);
    int v[t];
    for(int i =0; i<t; i++){
        scanf("%d", &v[i]);
    }
    double resultado= media(v, t);
    printf("%f", resultado);
    return 0;
}