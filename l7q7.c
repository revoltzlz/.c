#include <stdio.h>
#include <stdlib.h>
int main(){
    char *v = malloc(10 * sizeof(char));
    for(int i = 0; i < 10; i++){
        v[i] = '0' + i;
    }
    for(int i = 0; i < 10; i++){
        printf("%c ", v[i]);
    }
    free(v);
    return 0;
}