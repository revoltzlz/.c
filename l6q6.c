#include <stdio.h>
int main(){
    int v[25];
    int n;
    for(int i=0; i<25; i++){
        scanf("%d", &n);
        v[i]=n;
    }
    for(int i=0; i<25/2; i++){
        int temp=v[i];
        v[i]= v[24-i];
        v[24-i]=temp;

    }
    for(int i =0; i<25; i++){
        printf("%d ", v[i]);
    }
return 0;
}