#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int v[n];
    for(int i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
    int encontrou_zero=0;
    for(int i=0; i<n; i++){
        if(v[i]!=0){
            encontrou_zero=1;
        }
        if(encontrou_zero==1 && v[i]==0){
            printf("N");
            return 0;
        }
    }
    printf("S");
    return 0;
}