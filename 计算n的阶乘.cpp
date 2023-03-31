#include <stdio.h>

int main()
{
	int n = 0, i = 0;
	int factorial = 1;
	printf("«Î ‰»Î n = ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		factorial *= i;
	}
	printf("%dµƒΩ◊≥ÀŒ™%d\n", n, factorial);
}