#include <stdio.h>
int ack(int m,int n);
int main()
{
	ack(1,10);
	return 0;
}
int ack(int m,int n)
{
	if (n==m)
	{
		return 0;
	}
	else{
		
		return printf("%d\n",m),ack(m-1);
	}
		
}