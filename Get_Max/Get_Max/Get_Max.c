#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr[10] = { 1, 3, 2, 6, 4, 5, 8, 7, 98, 10 };
	int i = 0;
	int max = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("max=%d\n", max);
	return 0;
}