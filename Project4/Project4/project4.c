#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

 //分支语句和循环语句
//分支：
// if，swith
// 
// 循环：
// while，for，do while
// 
// goto语句

//一个分号隔开的就是一个语句

//if语句：

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age <18)
//	{
//		printf("未成年");
//	}
//	else if(age>=18 && age<30)
//	{
//		printf("青年\n");
//	}
//	else if (age >= 30 && age60)
//	{
//		printf("壮年\n");
//	}
//	else
//	{
//		printf("老年\n");
//	}
//	return 0;
//}

//注意悬空else的问题
//如：
//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe");
//	else
//		printf("haha");//else会且仅会和离他最近的if匹配，所以这个语句什么都不会打印
//	return 0;
//}

//判断是否为奇数：
//int main()
//{
//	int a = 5;
//	if (1 == a % 2)
//	{
//		printf("奇数");
//	}
//	else
//	{
//		printf("偶数");
//	}
//	return 0;
//} 

//产生1-100的奇数
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (1 == i % 2)
//		{
//			printf("%d\n", i);
//		}
//		i++;
//	}
//
//	return 0;
//}

//switch语句：
//较多分支的情况下，例如输入几就输出星期几
//Switch（整形表达式
//{
//		语句项；
//}
//

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	case 7:
//		printf("星期日");
//		break;
//	}
//	return 0;
//}

//对于1-5，输出工作日
// 6-7，输出休息日
// 
//break并不是必须的
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//	default:
//		printf("请输入1-7的数字");
//		break;//default可以放在任何位置，个人习惯：放在最后面
//	}
//	return 0;
//}

 //循环：
//while, do while, for
//用while 打印1-10
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			//break;//break在while语句中的用法：用于永久终止循环
//			i++;
//			continue;//continue在while中的用法：仅跳出本次循环
//		}
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
//getchar 和putchar，读取字符和打印字符

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
	//按下ctrl+z结束读取循环
}