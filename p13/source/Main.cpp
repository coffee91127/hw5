#include<stdio.h>
#include<stdlib.h>
void array(const int a[][3]);
int main(void)
{
	int a[2][3] = { {2,3,5},{2,5,7} };
	int b[2][3] = { 2,3,2,5,7 };
	int c[2][3] = {{2,2},{2,5}};
	array(a); printf("\n");
	array(b); printf("\n");
	array(c);
	system("pause");
	return 0;
}
void array(const int a[][3])
{
	int i;
	int j;
	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
}
