#include<stdio.h>

int main()
{
    float  base_maior, base_menor, altura, area;
    printf("Informe o valor em centimetros da base maior do trapézio: ");
    scanf("%f", &base_maior);
    printf("Informe o valor em centimetros da base menor do trapézio: ");
    scanf("%f", &base_menor);
    printf("Informe o valor em centimetros da altura do trapézio: ");
    scanf("%f", &altura);
    area = ((base_maior + base_menor) * altura) / 2; 
    printf("A area do trapézio é de %.1f centimetros", area);
    return 0;
}
