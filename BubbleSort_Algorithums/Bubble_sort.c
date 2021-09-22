/*
prg 1:sort array element using bubble sort
*/
#include<stdio.h>
void main()
{
	int i, j, n, temp;
	int a[100];
	printf("how many element you want\n");
	scanf_s("%d", &n);
	printf("enter element in array\n");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	printf("sorted element are \n");
	for (i = 0; i < n; i++)
	{
		printf("%d  ", a[i]);
	}

}