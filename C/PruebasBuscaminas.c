
#include <stdio.h>
int tablero(int *estado2,int *bombas2);
void Inicial(int *estado,int *bombas);
int win(int *estado,int *bombas);
int main ()
{
    int x, y,GameOver;
    int estado[8][8];
    int bombas[8][8];
    Inicial(&estado[0][0],&bombas[0][0]);
	
while(1){
	
	GameOver=tablero(&estado[0][0],&bombas[0][0]);
	GameOver=win(&estado[0][0],&bombas[0][0]);
    if(GameOver==1){
		printf("GAME OVER :(");
		break;
	}
	else if (GameOver==8){
		break;
	}
	printf("\nValores [1-8]")
    printf ("\nLa cordenada x: ");
    scanf ("%d", &x);
    printf ("x: %d", x);
    printf ("\nLA CORDENADA Y: ");
    scanf ("%d", &y);
    printf ("y: %d\n", y);
	estado[y-1][x-1]=1;
	printf("\n\n\n\n");
}
  return 0;
}

void Inicial(int *estado,int *bombas){
	int i,j[8],k;
	k=0;
	//poner a 0 
	for (i=0;i<64;i++){
		*(estado+i)=0;    
        *(bombas+i)=0;
	}
	//poner bombas
	while(k<8){
		//confiemos en que no se repiten
		j[k]= rand () % (63-0+1) + 0;   // Este está entre M y N
		*(bombas+j[k])=65;
		k+=1;
	}
	//poner numeros
	
	for (i=0;i<64;i++){
		if(*(bombas+i)<9){
			//_|
			if( (i%8==0) && i<8){
				*(bombas+i)=(*(bombas+(i+1))+*(bombas+(i+8))+*(bombas+(i+9)))/65;
			}
			// |
			else if (i%8==0 && i>=8 && i<49){
				*(bombas+i)=(*(bombas+(i+1))+*(bombas+(i+8))+*(bombas+(i+9)) + *(bombas+(i-7))+*(bombas+(i-8))) / 65;
			}
			//-|
			else if (i%8==0 && i>55){
				*(bombas+i)=(*(bombas+(i+1)) + *(bombas+(i-7))+*(bombas+(i-8)) )/65;
			}
			//_
			else if (i%8!=0 && i%8!=7 && i>55){
				*(bombas+i)=(*(bombas+(i+1)) + *(bombas+(i-7))+*(bombas+(i-8)) + *(bombas+(i-9)) + *(bombas+(i-1))) / 65;
			}
			//|-
			else if (i%8==7 && i>55){
			*(bombas+i)=(*(bombas+(i-8)) + *(bombas+(i-9)) + *(bombas+(i-1)))/65;
			}
			//|
			else if (i%8==7 && i>=8 && i<56){
				*(bombas+i)=(*(bombas+(i-1))+*(bombas+(i+8))+*(bombas+(i-9)) + *(bombas+(i+7))+*(bombas+(i-8)) )/65;
			}
			//|_
			else if (i%8==7 && i<8){
			*(bombas+i)=(*(bombas+(i+8)) + *(bombas+(i+7)) + *(bombas+(i-1)))/65;
			}
			//-
			else if (i%8!=0 && i%8!=7 && i<8){
				*(bombas+i)=(*(bombas+(i+1)) + *(bombas+(i+7))+*(bombas+(i+8)) + *(bombas+(i+9)) + *(bombas+(i-1)))/65;
			}
			// resto
			else {
				*(bombas+i)=(*(bombas+(i+1)) + *(bombas+(i+7))+*(bombas+(i+8)) + *(bombas+(i+9)) + *(bombas+(i-1))+ *(bombas+(i-7))+*(bombas+(i-8)) + *(bombas+(i-9)))/65;
			}
		}
	}
}
int tablero(int *estado2,int *bombas2)
{
    int i, j, k=0,p=0;
    
    for (i = 0; i < 8; i++)
    {
      for (j = 0; j < 8; j++) 
		{
			printf ("_");
			if(*(estado2+k)==1)
			{
				if (*(bombas2+(k))<9)
				{
					printf("%d",*(bombas2+(k)));
				}
				else
				{
					printf("*");
					p=1;
				}   
			}
			else if( p==1 && *(estado2+k)==0 && *(bombas2+k)>9 )
			{
				printf("*");
			} 
			else{
				printf ("_");
			}	 
		  printf ("_");
		  printf ("|");
		  k+=1;
		}
      printf ("\n");
    }
   return p;
}
int win(int *estado,int *bombas){
	int i,p, 
	
	for (i=0;i<64;i++){
		if(*(bombas+i)>9 && *(estado+i)==1){
			//_|
			if( (i%8==0) && i<8){
				p=(*(bombas+(i+1))+*(bombas+(i+8))+*(bombas+(i+9)))/65;
			}
			// |
			else if (i%8==0 && i>=8 && i<49){
				*(bombas+i)=(*(bombas+(i+1))+*(bombas+(i+8))+*(bombas+(i+9)) + *(bombas+(i-7))+*(bombas+(i-8))) / 65;
			}
			//-|
			else if (i%8==0 && i>55){
				*(bombas+i)=(*(bombas+(i+1)) + *(bombas+(i-7))+*(bombas+(i-8)))/65;
			}
			//_
			else if (i%8!=0 && i%8!=7 && i>55){
				*(bombas+i)=(*(bombas+(i+1)) + *(bombas+(i-7))+*(bombas+(i-8)) + *(bombas+(i-9)) + *(bombas+(i-1))) / 65;
			}
			//|-
			else if (i%8==7 && i>55){
			*(bombas+i)=(*(bombas+(i-8)) + *(bombas+(i-9)) + *(bombas+(i-1)))/65;
			}
			//|
			else if (i%8==7 && i>=8 && i<56){
				*(bombas+i)=(*(bombas+(i-1))+*(bombas+(i+8))+*(bombas+(i-9)) + *(bombas+(i+7))+*(bombas+(i-8)) )/65;
			}
			//|_
			else if (i%8==7 && i<8){
			*(bombas+i)=(*(bombas+(i+8)) + *(bombas+(i+7)) + *(bombas+(i-1)))/65;
			}
			//-
			else if (i%8!=0 && i%8!=7 && i<8){
				*(bombas+i)=(*(bombas+(i+1)) + *(bombas+(i+7))+*(bombas+(i+8)) + *(bombas+(i+9)) + *(bombas+(i-1)))/65;
			}
			// resto
			else {
				*(bombas+i)=(*(bombas+(i+1)) + *(bombas+(i+7))+*(bombas+(i+8)) + *(bombas+(i+9)) + *(bombas+(i-1))+ *(bombas+(i-7))+*(bombas+(i-8)) + *(bombas+(i-9)))/65;
			}
		}
	}
	if (i==8){
		printf(" \n\n\n\n\n :D ganaste perro");
	}
	return p;
}