#include<stdio.h>
#include<stdlib.h>
int addbyone(int &ref);
int main()
{
	int x = 100;
	int y = addbyone(x);
	printf("x=%d \n", x);
	system("pause");
}
int addbyone(int &ref)
{
	ref++;
	printf("xref=%d \n",ref);
	return ref;

}