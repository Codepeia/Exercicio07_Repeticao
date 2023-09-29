#include<stdio.h>

main(){

    int n;
    printf("Digite um numero");
    scanf("%d", &n);

    for(int i = n; i >= 0; i-- ){
        printf("\n%d", i);
    }
}