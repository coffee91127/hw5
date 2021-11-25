#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int j,total;
	total = 0;
	for (j = 0; j < 10; j++)
	{
		printf("i[%d]%5d\n", j, i[j]);
		total += i[j];
	}
	printf("%d\n", total);
	system("pause");
	return 0;
}