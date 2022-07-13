#include <stdio.h>

int main()
{
	int x=37;
	printf("%d ",x);
	while(1){
	switch(x%2)
	{
	case 0:
	x=x/2;
	
	break;
	default:
	x=x*3+1;
	}
	printf("%d ",x);	
	if(x==1){
	break;	
	}
	}
}