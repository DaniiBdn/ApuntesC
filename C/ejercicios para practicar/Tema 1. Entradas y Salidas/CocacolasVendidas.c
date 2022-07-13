#include <stdio.h>
#include <math.h>

int main()
{
	int VentasCoca,VentasN,VentasL,i;
	float Coca,N,L,total[4];
	//-------Cocacola----------//
	printf("Ventas cocacola: ");
	scanf("%d",&VentasCoca);
	printf("Precio?: ");
	scanf("%f",&Coca);
	total[0]=VentasCoca*Coca;
	//-------Naranja---------//
	printf("Ventas Naranja: ");
	scanf("%d",&VentasN);
	printf("Precio?: ");
	scanf("%f",&N);
	total[1]=VentasN*N;
	//-------Limon---------//
	printf("Ventas Limon: ");
	scanf("%d",&VentasL);
	printf("Precio?: ");
	scanf("%f",&L);
	total[2]=VentasL*L;
	//------------------------//
	total[3]=total[0]+total[1]+total[2];
	printf("Producto\tVentas\t\tPrecio\t\tTotal\n");
	for(i=0;i<80;i++){
		printf("-");
	}
	
	printf("\nCola");
	printf("\t\t%d",VentasCoca);
	printf("\t\t%.2f",Coca);
	printf("\t\t%.2f",total[0]);
	
	printf("\nNaranja");
	printf("\t\t%d",VentasN);
	printf("\t\t%.2f",N);
	printf("\t\t%.2f",total[1]);
	
	printf("\nLimon");
	printf("\t\t%d",VentasL);
	printf("\t\t%.2f",L);
	printf("\t\t%.2f",total[2]);
	
	printf("\n\t\t\t\tTotal\t\t%.2f",total[3]);
}