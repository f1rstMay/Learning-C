#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
//输入三个整数，将他们从大到小排列
//int swap(int a, int b)
//{
//	int c = a;
//	a = b;
//	b = c;
//	return a, b;
//}//无法执行，等待下一步讲解
//
//int main()
//{
//	int x = 0, y = 0, z = 0;
//	scanf("%d %d %d", &x, &y, &z);
//	if (x < y)
//	{
//		swap(x, y);
//	}
//
//	if (x < z)
//	{
//		swap(x, z);
//	}
//
//	if (y < z)
//	{
//		swap(y, z);
//	}
//
//	printf("%d %d %d\n", x, y, z);
//	return 0;
//}

//打印1-100中所有3的倍数
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//求最大公约数
//int main()
//{
//	int a = 0, b = 0, f = 1;
//	scanf("%d %d", &a, &b);
//	if (a < b)
//	{
//		int t = a;
//		a = b;
//		b = t;
//	}
//	
//	for (int i = b; i >1; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			f = i;
//			break;
//		}
//	}
//	printf("%d\n", f);
//	return 0;
//}
//辗转相除法：
//int main()
//{
//	int a = 0, b = 0, m = 0;
//	scanf("%d %d", &a, &b);
//		if (a < b)
//		{
//			int t = a;
//			a = b;
//			b = t;
//		}
//		do
//		{
//			m = a % b;
//			if (m == 0)
//				break;
//			else
//			{
//				a = b;
//				b = m;
//			}
//		} while (1);
//		printf("%d", b);
//	return 0;
//}
//代码优化：
//int main()
//{
//	int m = 0, n = 0, t = 0;
//	scanf("%d %d", &m, &n);
//	while (t = m%n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("%d", n);
//	//最小公倍数 = m * n / 最大公约数
//	return 0;
//}

//打印1000-2000的闰年
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i ++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		else if (i % 400 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//打印100-200之间的质数
//如果 m =a*b
//a和b中一定至少有一个数字是<=开平方m的
//sqrt - 是开平方，需要引用头文件math.h
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i) ; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

