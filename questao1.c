#include <stdio.h>

void invete(int v[], int n);

int main(void){

    int ni, in;
    printf("tamanho do vetor: ");
    scanf("%d", &ni);

    int v[ni];

    for(in = 0; in < ni; in++){
        scanf("%d", &v[in]);
    }
    invete(v, ni);
    return 0;
}

void invete(int v[], int n){
    int i;
    int f = n - 1;
    
    for(i = 0; i < n; i++){
        if(i < f){
        int aux = v[i];
        v[i] = v[f];
        v[f] = aux;
        f--;
        }
    }
    for(i = 0; i < n; i++){
        printf(" %d ", v[i]);
    }

    
}