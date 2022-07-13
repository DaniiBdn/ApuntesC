#include <stdio.h>
#include <math.h>

int main()
{
	float c1,c2;
	while(1){
	
	printf("Cateto 1: ");
    scanf("%f",&c1);
	printf("Cateto 2: ");
    scanf("%f",&c2);

    printf("Area: %f \n", (c1*c2)/2);
	printf("Perimetro: %f \n", sqrt(c1*c1+c2*c2));
    getchar();

	}

    return 0;
}