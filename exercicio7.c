#include<stdio.h>

main(){

    char cabelo, olhos, sexo;
    int contadorM = 0, contadorF = 0,contadorGeral = 0, contadorEspecifico = 0, idade;
    float salario, porcentagem;

    do{
        contadorGeral++;
        fflush(stdin);
        //validacao do sexo
        do{
            printf("Digite o sexo (m / f): ");
            scanf("%c", &sexo);
            if(sexo == 'm'){
                contadorM++;
            }else{
                contadorF++;
            }
            fflush(stdin);
            if(sexo != 'm' && sexo != 'f'){
               printf("\nopcao invalida. Digite novamente");     
            }
        }while(sexo != 'm' && sexo != 'f');
      //validacao dos olhos
        do{
            printf("Digite a cor dos olhos a, p, v, c: ");
            scanf("%c", &olhos);
            fflush(stdin);
            if(olhos != 'a' && olhos != 'v' && olhos != 'c' && olhos != 'p'){
               printf("\nopcao invalida. Digite novamente");     
            }
        }while(olhos != 'a' && olhos != 'v' && olhos != 'c' && olhos != 'p');
      //validacao dos cabelos
        do{
            printf("Digite a cor dos cabelos a, p, v, c: ");
            scanf("%c", &cabelo);
            fflush(stdin);
            if(cabelo != 'r' && cabelo != 'l' && cabelo != 'c' && cabelo != 'p'){
               printf("\nopcao invalida. Digite novamente");     
            }
        }while(cabelo != 'r' && cabelo != 'l' && cabelo != 'c' && cabelo != 'p');

        do{
            printf("Digite a idade entre 10 e 100 ");
            scanf("%d", &idade);
            fflush(stdin);
            if(idade < 10 || idade > 100){
               printf("\nopcao invalida. Digite novamente");     
            }
        }while(idade != -1 && (idade < 10 || idade > 100));

        do{
            printf("Digite o salario ");
            scanf("%f", &salario);
            fflush(stdin);
            if(salario < 0){
               printf("\nopcao invalida. Digite novamente");     
            }
        }while(salario < 0);

        if(sexo == 'f' && cabelo == 'c' && olhos == 'c' && (idade > 18 && idade < 35)){
            contadorEspecifico++;
        }

        printf("Digite -1 para ou 0 para continuar");
        scanf("%d", &idade);
    }while(idade != -1);

    porcentagem = (float)contadorEspecifico * 100 / contadorGeral;

    printf("\nTotal de cadastros%d", contadorGeral);
    printf("\nTotal cadastro homens %d", contadorM);
    printf("\nTotal cadastro mulheres %d", contadorF);
    printf("\nPorcentagem mulheres com caracteristicas especificas %f", porcentagem);
}