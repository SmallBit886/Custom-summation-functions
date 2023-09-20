#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//自定义函数
int Add(int x, int y)
{
	int sum;
	sum = x + y;
	return sum;

}
int main()
{
	int a = 10;
	int b = 30;
	int sum = 0;
	sum = Add(4, 7);
	printf("%d\n", sum);



	return 0;
}