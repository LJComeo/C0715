#include <stdio.h>
#include <stdlib.h>

int fun(int a, int b)
{
	if (a > b)
		return (a + b);
	else
		return (a - b);
}

int f(int a)
{
	int b = 0;
	static int c = 3;
	a = c++, b++;
	return (a);
}

int x = 3;
void inc()
{
	static int x = 1;
	x *= (x + 1);
	printf("%d\n", x);
	return;
}

int main()
{
	//int x = 3, y = 8, z = 6, r;
	//r = fun(fun(x, y), 2 * z);
	//printf("%d\n", r);//-17

	//int a = 4;
	//printf("%d\n", ++(a++));++操作符的操作数必须为左值，即就是能找到固定位置的值

	/*int a = 2, i, k;
	for (i = 0; i < 2; i++)
	{
		k = f(a++);
	}
	printf("%d\n", k);*/

	int i;
	for (i = 1; i < x; i++)
	{
		inc();
	}

	system("pause");
	return 0;
}