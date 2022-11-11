#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 5

int main(void)
{
	int i, j, tmp;
	_Bool check = true;
	int a[MAX] = { 26,5,81,7,63 };
	for (i = 0; check && i < MAX - 1; i++)
	{
		check = false;
		for (j = 0; j < MAX - 1 -i; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				check = true;
			}

		}

		printf("Loop %d:", i);
		for (j = 0; j < MAX; j++)
			printf("%4d", a[j]);
		printf("\n");

	}

	system("pause");
	return 0;
}

