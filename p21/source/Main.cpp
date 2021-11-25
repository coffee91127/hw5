#include<stdio.h>
#include<stdlib.h>
void staticarray(void);
void automaticarray(void);
int main(void)
{
	printf("first call to each function:");
	staticarray();
	automaticarray();
	printf("\n\nsecond call to each function:");
	staticarray();
	automaticarray();
	system("pause");
	return 0;
}
void staticarray(void)
{
	static int array1[3];
	int i;
	printf("\nvalue on entering staticarray\n");
	for (i = 0; i <= 2; i++)
	{
		printf("array1[%d] = %d ", i, array1[i]);
	}
	printf("\nvalue on existing staticarray\n");
	for (i = 0; i <= 2; i++)
	{
		printf("array1[%d] = %d ", i, array1[i]+=5);
	}
}
void automaticarray(void)
{
	int array2[3] = {1,2,3};
	int i;
	printf("\nvalue on entering automaticarray\n");
	for (i = 0; i <= 2; i++)
	{
		printf("array2[%d] = %d ", i, array2[i]);
	}
	printf("\nvalue on existing staticarray\n");
	for (i = 0; i <= 2; i++)
	{
		printf("array2[%d] = %d ", i, array2[i] += 5);
	}
}