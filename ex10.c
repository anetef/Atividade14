#include<stdio.h>

int main(){
    int valores[5];

    int *p= valores;

    for(int i = 0; i < 5; i++){
        printf("Digite o %d valor: ", i+1);
        scanf("%d", p + i);

    }
    for(int i =0; i < 5; i++){
        printf("%d ", *(p + i) + *(p + i));        
    }

}