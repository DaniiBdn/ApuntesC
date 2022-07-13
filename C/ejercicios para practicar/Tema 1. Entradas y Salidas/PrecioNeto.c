#include <stdio.h>

int main()
{
    float PrecioBruto, margen,PrecioNeto;
    
    printf("Precio Bruto: ");
    scanf("%f",&PrecioBruto);
    printf("Margen: ");
    scanf("%f",&margen);
    
    PrecioNeto= PrecioBruto * ((100+ margen)/100);
    printf("Precio Neto: %f", PrecioNeto);
    

    return 0;
}