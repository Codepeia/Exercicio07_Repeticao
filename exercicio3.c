#include<stdio.h>

main(){

    int impar=1, contador= 1, numero;

    printf("Digite um numero");
    scanf("%d", &numero);

    /*while(contador <= n){
        printf("\n%d", contador);
        co*/

   /* while(contador <= numero){
        printf("\n%d", impar);
        impar += 2;
        contador++;
    }*/

    for(int i = 1; i <= numero; i++){
        printf("\n%d", impar);
        impar += 2;
    }

}