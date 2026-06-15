#include <stdio.h>
#include <stdlib.h>

int JogaDado(int num_faces) {
    return (rand() % num_faces) + 1;
}

int testaDados() {
    int total1 = 0;
    for(int i = 0; i < 100; i++){
        total1 += JogaDado(10);
    }

    int total2 = 0;
    for(int i = 0; i < 50; i++){
        total2 += JogaDado(20);
    }

    int total3 = JogaDado(100);

    if(total1 > total2 && total1 > total3){
        return 10;
    } else if(total2 > total1 && total2 > total3){
        return 50;
    } else {
        return 100;
    }
}

int main(){
    int resultado = testaDados();
    printf("O maior valor foi do dado de %d faces\n", resultado);
    return 0;
}