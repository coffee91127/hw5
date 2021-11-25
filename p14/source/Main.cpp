#include<stdio.h>
#include<stdlib.h>
#define STUDENT 4
#define EXAM 3
void array(const int a[][EXAM]);
void high(const int a[][EXAM]);
void low(const int a[][EXAM]);
void av(const int a[][EXAM]);

int main(void)
{
	int a[STUDENT][EXAM] = { {20,30,50},{20,50,70},{10,30,50},{20,50,70} };
	array(a); printf("\nhigh");
	high(a); printf("\nlow");
	low(a); printf("\nav");
	av(a);
	system("pause");
	return 0;
}
void array(const int a[][EXAM])
{
	int i;
	int j;
	for (i = 0; i < STUDENT; i++)
	{
		for (j = 0; j < EXAM; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
}
void high(const int a[][EXAM])
{
	int i;
	int j;
	int b=0;
	for (i = 0; i < STUDENT; i++)
	{
		for (j = 0; j < EXAM; j++)
		{
			if (b < a[i][j])
			{
				b = a[i][j];
			}
		}
		
	}
	printf("%d", b);
}
void low(const int a[][EXAM])
{
	int i;
	int j;
	int c = 100;
	for (i = 0; i < STUDENT; i++)
	{
		for (j = 0; j < EXAM; j++)
		{
			if (c > a[i][j])
			{
				c = a[i][j];
			}
		}

	}
	printf("%d", c);
}
void av(const int a[][EXAM])
{
	int i;
	int j;
	int total=0;
	for (i = 0; i < STUDENT; i++)
	{
		for (j = 0; j < EXAM; j++)
		{
			total += a[i][j];
		}

	}
	total = total / STUDENT / EXAM;
	printf("%d", total);
}