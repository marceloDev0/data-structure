#include <stdio.h>

int fun(int num, int num2){ // funçao utilizada para soma os numeros existentes entre num e  num2
    int soma=0, i;
    if(num < num2){ // iniciei esse if para testa ser num era menor que num2 e garantir que o numero menor seja sempre o primeiro dentro do for
        for(i = num+1; i < num2; i++){
            soma = soma + i;
    }
    }else{
        for(i = num2+1; i < num; i++){
            soma = soma + i;
        }
    }
    return soma; 
}

int main(){
    int numero, numero2, som;
    scanf("%d %d", &numero, &numero2);
    som = fun(numero, numero2);
    printf("%d",som);

    return 0;

}