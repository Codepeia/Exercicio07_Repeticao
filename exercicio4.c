#include<stdio.h>

main(){

    int qtd = 10, multiplo = 0, contador=1;

    /*for(int i = 1; i <= qtd; i++){
        multiplo = i * 3;
        printf("\n%d", multiplo);
    }*/

    while(multiplo <= 5){
        if(contador % 3 == 0){
            multiplo++;
        }
        contador++;
    }



}