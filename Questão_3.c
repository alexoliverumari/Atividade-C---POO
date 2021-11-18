#include<stdio.h>

int main()
{
    int qntd_cavalos, qntd_ferraduras;
    printf("Informe a quantidade de cavalos comprados: ");
    scanf("%d", &qntd_cavalos);
    qntd_ferraduras = qntd_cavalos * 4; 
    printf("\nSerão necessárias %d ferraduras para equipar todos os cavalos comprados.", qntd_ferraduras);
    return 0;
}