#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int mod(int x)
{
	int y = 0;
	y = x % 5;
	return y;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d", &a);
	b = mod(a);
	if(b==0)//×¢ÒâÁ½==
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}

	return 0;
}