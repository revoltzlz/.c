int main(){
    int vetor[50];
    int soma=0;
    int i;
    for (i=0; i<50; i++){
        vetor[i]=i+1;
        soma+= vetor[i];
    }
    printf("O somatorio dos elementos é: %d\n", soma);
    return 0;
}