#include<stdio.h>

int soma_dobro(int *A, int *B){
    *A = *A + *A;
    *B = *B + *B;

    int soma = *A + *B;

    return soma;    
}

main(){

    int A, B;

    printf("Informe o valor de A: ");
    scanf("%d", &A);

    printf("Informe o valor de B: ");
    scanf("%d", &B);

    int resultado = soma_dobro(&A, &B);
    printf("\nDobro de A: %d", A);
    printf("\nDobro de B: %d", B);
    printf("\nResultado da soma : %d", resultado);
}