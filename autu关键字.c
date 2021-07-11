#include <stdio.h>
#include <windows.h>
int main()
{
	for (int i = 0; i < 10; i++)
	{
		printf("i=%d\n", i);
		if (1)
		{
			auto int j = 0; //自动变量
			printf("before: j=%d\n", j);
			j += 1;
			printf("after : j=%d\n", j);
		}
	}
	system("pause");
	return 0;
}