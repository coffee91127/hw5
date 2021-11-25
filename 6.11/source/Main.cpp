#include<stdio.h>
#include<stdlib.h>
#define SIZE 8
void bubble(int a[]);
int main(void)
{
	int i;
	int array[SIZE] = { 3,5,2,3,1,99,4,2};
	printf("origin\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n\nmodified\n");
	bubble(array);
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", array[i]);
	}
	system("pause");
	return 0;
}
void bubble(int a[])
{
	int temp, i, j, z,y,x=0;
	int temp2[SIZE];
	for (i = 0; i < SIZE; i++)
	{
		for (z = 0; z < SIZE; z++)
		{
			temp2[z] = a[z];
			printf("%d ", a[z]);
		}
		printf("\n");
		for (j = 1; j <= SIZE; j++)
		{
			if (a[j] > a[j - 1])
			{
				temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}
			
		}
		for (y = 0; y < SIZE; y++)
		{
			if (temp2[y] == a[y])
			{
				x ++;
			}
		}
		printf("%d\n\n", x);
		if (x == SIZE)
		{
			break;
		}
		x = 0;
	}

}