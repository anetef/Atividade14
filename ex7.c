#include<stdio.h>

void soma_valores(int *A, int *B){
    *A = *A + *B;
}

main(){
    int A=5, B=10;

    printf("Valor de A: %d", A);
    printf("\nValor de B: %d", B);


    soma_valores(&A, &B);

    printf("\n\nValor de A modificado: %d", A);
    printf("\nValor de B: %d", B);

}