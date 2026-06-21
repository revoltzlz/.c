#include <stdio.h>
#include <math.h>
void calcula(float x, float *a, float *b){
    *a = x*x;
    *b = sqrt(x);
}