#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i[10] = { 0,1,2,3,10,5,6,7,8,9 };
	int j,k;
	for (j = 0; j < 10; j++)
	{
		printf("i[%d]%5d\t", j, i[j]);
		for (k = 0; k < i[j]; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}