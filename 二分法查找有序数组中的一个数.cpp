#include <stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz -1, left = 0;
	printf("��������Ҫ���ҵ���: ");
	scanf_s("%d", &n);

	while (left <= right)//����ʹ�� left != right
	{ 
		int mid = (right + left) / 2;
		if (arr[mid] > n)
		{
			right = mid - 1;
		}
		else if (arr[mid] < n)
		{
			left = mid + 1;
		}
		else
		{
			printf("%d���±�Ϊ%d\n", n, mid);
			break;
		}

	}
	if (left > right)
	{
		printf("��������û����Ҫ���ҵ���\n");
	}



}