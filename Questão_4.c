#include<stdio.h>

int main()
{
    float peso_prato, valor_final;
    printf("Informe o peso do prato, em quilos: ");
    scanf("%f", &peso_prato);
    valor_final = peso_prato * 12.00; 
    printf("\nO valor a ser pago será: R$ %0.2f reais.", valor_final);
    return 0;
}