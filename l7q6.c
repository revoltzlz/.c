#include <stdio.h>
#include <stdlib.h>
int main(){
    float *p1;
    p1=malloc(sizeof(float));   
    *p1=3.14;   
    float *p2;
    p2=p1;
    printf("p1=%.2f\n",*p1);
    printf("p2=%.2f\n",*p2);
    free(p1);
    return 0;
}