#include <stdio.h>
int main(){
    int m, n;
    scanf("%d", &n);
    scanf("%d", &m);
    int total=n*m;
    int v[total];
    for(int i=0; i<total; i++){
        scanf("%d", &v[i]);
    }
    for(int i=0; i<total; i++){
        for(int j=0;j<total-i;j++){
            if(v[j]>v[j+1]){
                int temp = v[j];
                v[j]= v[j+1];
                v[j+1]=temp;
            }
        }
    }
    int matriz[n][m];
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            matriz[i][j]= v[k];
            k++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}