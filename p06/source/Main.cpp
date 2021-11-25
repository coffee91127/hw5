#include<stdio.h>
#include<stdlib.h>
#define SIZE 18

int main(void)
{
	int i[SIZE] ;
	int j;
	for (j = 0; j < SIZE; j++)
	{
		i[j] = 2+2 * j;
		printf("i[%d]%5d\n", j, i[j]);

	}
	system("pause");
	return 0;
}