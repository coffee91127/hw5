#include<stdio.h>
#include<stdlib.h>
void inverse(int *);
int main(void)
{
	int a[3] = { 1,2,3 };
	int i;
	for (i = 0; i < 3; i++)
	{
		printf(" a[%d]=%d ",i,a[i]);
	}
	printf("\n");
	inverse(a);
	for (i = 0; i < 3; i++)
	{
		printf(" a[%d]=%d ", i, a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
void inverse(int *b)
{
	int temp[3];
	int i;
	for (i = 0; i < 3; i++)
	{
		temp[2-i] = b[i];
	}
	for (i = 0; i < 3; i++)
	{
		b[i]=temp[i];
	}
}
