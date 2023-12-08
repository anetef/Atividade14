#include<stdio.h>

void mudar_valor(int *valor1, int *valor2){
    int aux;
    aux = *valor1;
    *valor1 = *valor2;
    *valor2 = aux; 
}


main(){

    int numero1, numero2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &numero1);

    printf("Digite o segundo valor: ");
    scanf("%d", &numero2);

    mudar_valor(&numero1, &numero2);

    printf("\nPrimeiro valor alterado: %d", numero1);
    printf("\nSegundo valor alterado: %d", numero2);
}