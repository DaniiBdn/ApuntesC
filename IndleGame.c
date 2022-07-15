#include <stdio.h>


void DibujarEscenario(int *Nivel,unsigned char *Nombre,int *vida,int *fuerza,int *defensa,int *esquivar);
unsigned char Digitos(int m);
void CrearEspacios(int **numero);
void Borrar(void);
void delay(void);
void SubirNivel(void);

struct{
	unsigned int Nivel;
	unsigned char Nombre[7];
	unsigned int vida;
	unsigned int fuerza;
	unsigned int defensa;
	unsigned int esquivar;
}jugador;

enum {
	cofre,enemigo
} eventos;

int main()
{
	jugador.Nivel=0;
	
	jugador.Nombre[0]='A';
	jugador.Nombre[1]='t';
	jugador.Nombre[2]='e';
	jugador.Nombre[3]='n';
	jugador.Nombre[4]='i';
	jugador.Nombre[5]='u';
	jugador.Nombre[6]='s';
	
	//CABALLERO
	jugador.vida=20;
	jugador.fuerza=6;
	jugador.defensa=10;
	jugador.esquivar=2;
		
	//printf("Como te llamas?: ");
	//scanf("%s",&Nombre);
	
	while(1){
	Borrar();
	
	//subir de nivel
	SubirNivel();
	DibujarEscenario(&jugador.Nivel,&(jugador.Nombre[0]),&jugador.vida,&jugador.fuerza,&jugador.defensa,&jugador.esquivar);
	//eventos
	delay();
	}
	   
    return 0;
}
void SubirNivel(void)
{
	//CABALLERO
	//rand () % (N-M+1) + M;   // Este está entre M y N
	jugador.Nivel+=1;
	jugador.vida+=(rand()%11);
	jugador.fuerza+=(rand()%6);
	jugador.defensa+=(rand()%6);
	jugador.esquivar+=(rand()%3);
}
void DibujarEscenario(int *Nivel,unsigned char *Nombre,int *vida,int *fuerza,int *defensa,int *esquivar)
{	
    unsigned char i;
	printf("|---------------------------------------|");
	printf("\n");
	
	printf("|\t\t");
	for(i=0;i<7;i++){
		printf("%c",*(Nombre+i));
	}
	printf("\t\t\t|");
	
	printf("\n");
	printf("|---------------------------------------|");
	printf("\n");
	printf("|\tNivel     --> \t\t%d\t|",*Nivel);
	printf("\n");
	printf("|---------------------------------------|");
	printf("\n");
	printf("|    Estadisticas     |     Objetos     |");
	printf("\n");
	printf("|---------------------|-----------------|");
	printf("\n");
	
	printf("|Vida:        %d",*vida);
	CrearEspacios(&vida);
	printf("|Espada: %s|","de Madera");
	printf("\n");
	
	printf("|Fuerza:      %d",*fuerza);
	CrearEspacios(&fuerza);
	printf("|-----------------|");
	printf("\n");
	
	printf("|Defensa:     %d",*defensa);     
	CrearEspacios(&defensa);
	printf("|-----------------|");
	printf("\n");
	
	printf("|Esquivar:    %d",*esquivar); 
	CrearEspacios(&esquivar);	
	printf("|-----------------|");
	printf("\n");
	printf("|---------------------------------------|");
	printf("\n");
}

void CrearEspacios(int **numero){
	unsigned char total,i;
	total=Digitos(**numero);
	for(i=0;i<(8-total);i++)		printf(" ");
	
}
unsigned char Digitos(int m)
{
	if ((m)/10==0)
		return 1;	
	else
		return 1+Digitos((m)/10);
}
void Borrar(void){
	unsigned char i;
	for (i=0;i<50;i++)				printf("\n");
}
void delay(void)
{
	unsigned long int a;
	for(a=0;a<1800000000;a++)
	{
		
	}
}
	//printf("\n ___\n/___\\\n|___|"); //casa o cofre haha
	
	/*espada
	printf("\n");
	printf(" /\\");
	printf("\n");
	printf("|  \\");
	printf("\n");
	printf(" \\  \\");
	printf("\n");
	printf("  \\  \\");
	printf("\n");
	printf("   \\__\\");
	printf("\n");
	printf("     \\");
	*/
