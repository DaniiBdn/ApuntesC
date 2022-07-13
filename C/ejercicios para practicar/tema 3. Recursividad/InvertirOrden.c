#include <stdio.h>

//CAMBIAR POSICIÓN
int ack(char m[],int n);
int main()
{
	char array[5]="PABLO";
	short int j;

	ack(array,sizeof(array)/(2*sizeof(array[1])));
	
	return 0;
}
int ack(char m[],int n)
{
	static short int i=0;
	unsigned char k=n/2;
	short int j;
	
	if (i<k)
	{
		j=m[i];
		
		m[i]=m[n-1-i];
		m[n-1-i]=j;
		
		i+=1;
		return ack(m,n);
	}
	
	
		printf("%s",m);
	
	return 0;
}

