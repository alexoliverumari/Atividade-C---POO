#include<stdio.h>
#include<stdlib.h>

int main()
{
    float largura, cumprimento, area;
    printf("Digite a metragem correspondente a parte da frente do terreno: ");
    scanf("%f", &largura);
    printf("Digite a metragem correspondente a parte do lado do terreno: ");
    scanf("%f", &cumprimento);
    area = largura*cumprimento; 
    printf("A area do terreno é %.1f metros", area);
    return 0;

}
