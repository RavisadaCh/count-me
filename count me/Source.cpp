#include<stdio.h>
int main()
{
	int w;
	int x[2];
	printf("How many number are you gonna enter? : ");
	scanf_s("%d", &w);
	int i = 0;
	int y = 0;
	while (i < w)
	{
		printf("Enter number : ");
		scanf_s("%d", &x[i]);
		y = y + x[i];
		i++;
	}
	printf("sum = %d", y);
	return 0; 
}