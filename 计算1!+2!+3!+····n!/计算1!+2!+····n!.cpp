#include <stdio.h>
int main()
{
	int n = 0, i = 0;
	int factorial = 1;
	int sum = 0;
	printf("请输入 n:");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		factorial *= i;
		sum += factorial;
	}
	printf("%d", sum);
	
	Return 0;
}
