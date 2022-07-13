#include <stdio.h>

//LOOK ARRAY
int ack(int m[],int n);
int main()
{
	int array[6]={0,1,2,3,4,5};
	ack(array,sizeof(array)/sizeof(array[1]));
	return 0;
}
int ack(int m[],int n)
{
	static short int i=-1;
	if (i<n-1)
	{
		i+=1;
		return printf("%d\n",m[i]),ack(m,n);
		
	}
}

