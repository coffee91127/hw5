#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i[10] ;
	int j;
	for (j = 0; j < 10; j++)
	{
		i[j] = 0;
		printf("i[%d]%5d\n", j, i[j]);
		
	}
	system("pause");
	return 0;
}