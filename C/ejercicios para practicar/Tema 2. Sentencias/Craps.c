#include <stdio.h>
char dados(void);
int main()
{
	char loco;
	char suma,tirada,estado;
	while(1){
		printf("CRAPS");
	tirada=0;
	suma=dados();
	switch(suma){
		case 7:
		case 11:
		estado=1;
		break;
		case 2:
		case 3:
		case 12:
		estado=2;
		break;
		default:
		tirada=suma;
	}
	
	if(tirada!=0){
		while(1){
		suma=dados();
		if(suma==7){
			estado=2;
			break;
		}
		else if(suma==tirada){
			estado=1;
			break;
		}
		}
	}
	switch(estado){
		case 1:
			printf("\nHAS GANADO LOCO");
			break;
		case 2:
			printf("\nHas perdidolocuelo");
			break;
	}
	scanf("%c",&loco);
	if(loco=='1'){
		break;
	}
	printf("\n\n\n\n\n\n\n\n");
	}
	
	return 0;
}
char dados(void){
int dado1,dado2, suma;
 dado1=1+(rand()%6);
 dado2=1+(rand()%6);
  suma=dado1+dado2;
 printf("\n%d\t%d\t%d",dado1,dado2,suma);
 return suma; 
}