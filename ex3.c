#include<stdio.h>
int main(){

    int numero1, numero2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &numero1);

    printf("Digite o segundo valor: ");
    scanf("%d", &numero2);

    printf("\nEndereco de memoria do primeiro valor: %d", &numero1);
    printf("\nEndereco de memoria do segundo valor: %d", &numero2);
    if(&numero1 > &numero2){
        printf("\nO primeiro valor tem o maior endereco de memoria: %d", &numero1);

    }else{
        printf("\nO segundo valor tem o maior endereco de memoria: %d", &numero2);
    }
}