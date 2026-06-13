#include <stdio.h>
double potencia(double a, int b){
    double result=1;
    for(int i=0; i<b; i++){
        result*= a;
    }
    return result;
}
int main(){
    double x;
    int y;
    scanf("%lf", &x);
    scanf("%d", &y);
    double resultado= potencia(x, y);
    printf("%f", resultado);
    return 0;
}