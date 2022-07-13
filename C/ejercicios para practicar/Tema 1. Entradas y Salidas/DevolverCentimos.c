#include <stdio.h>
#include <math.h>

int main()
{
	float c;
	int c50,c20,c10,c5;
	while(1){
	
	printf("Cantidad a devolver: ");
    scanf("%f",&c);
	c=c*100;
	c50=c/50;
	c20=(c-c50*50)/20;
	c10=(c-c50*50-c20*20)/10;
	c5=((c-c50*50-c20*20-c10*10)/5);
	printf("50c: %d\n20c: %d\n10c: %d\n5c: %d\n",c50,c20,c10,c5);
	
    getchar();

	}

    return 0;
}