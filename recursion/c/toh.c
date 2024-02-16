#include<stdio.h>

void tower(int  n, char begin, char end, char aux)
{
	if(n==0)
	{
	//	printf("Move disk %d from rod %c to rod %c\n",n,begin,end);
		return;
	}
	tower(n-1, begin, aux, end);
	printf("Move disk %d from rod %c to rod %c\n",n,begin,end);
	tower(n-1,  aux, end,begin);
}

int main()
{
	int n = 3;
	tower(n, 'x','z','y');
	return 0;
}
