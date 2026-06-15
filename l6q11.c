#include <stdio.h>
int horas(int hora1, int min1, int hora2, int min2){
    int total1= hora1*60 + min1;
    int total2= hora2*60 + min2;
    int diferenca;
    if(total1>total2){
        diferenca= total1-total2;
    }
    else{
        diferenca=total2-total1;
    }
    return diferenca;
}
