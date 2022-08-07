#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);//123456//password是一个数组变量，不需要取地址
//	printf("请确认密码（Y/N)：>");
//	//清理缓冲区
//	//getchar(); //单次清理不干净缓冲区
//	int tmp = 0;
//	while (tmp = getchar() != '\n')
//	{
//		;
//	}
//	//while循环能清理的很干净
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("确认失败");
//	}
//	return 0;
// }

//int main()//代码仅打印数字字符
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//
//		putchar(ch);
//	}
//	return 0;
//}

//int main()//while语句三个部分离的太远
//{
//	int i = 1;//初始化部分
//	while (i <= 10)//判断部分
//	{
//		printf("%d\n", i);
//		i++;//调整部分
//	}
//	return 0;
//}

//for(exp1, exp2, exp3)//分别是初始化，判断，调整
//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		//if (i == 5)
//		//{
//		//	break;//
//		//	continue;//continue 和 break 在for语句中用法一样
//		//}
//			
//		printf("%d\n", i);
//	}
//	return 0;
//}

//do while语句：
//do
//	执行循环；
// while(表达式，判断语句)
//
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//练习：
//1、计算n的阶乘：
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i=1; i < n + 1; i++)
//	{
//		sum = sum * i;
//	}
//	printf("%d", sum);
//	return 0;
//}

//2、计算1!+2!+3!+......+10!
//int main()
//{
//	int n = 10;
//	int i = 1;
//	long sum = 1;
//	long result = 0;
//	for (i = 1; i <= n ; i++)
//	{
//		sum = sum * i;
//		result = result + sum; 
//	}
//	printf("%d", result);
//	return 0;
//}

//3、在有序数组中查找某一个数字：
//使用拆半（二分）查找法
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//设定一个有序数组
//	int key = 0;//要查找的是数字key
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
//	scanf("%d", &key);//输入相查找的数字
//	int mid = 0;
//	int left = 0;
//	int right = sz - 1;
//	while (arr[mid] != key)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if(arr[mid]>key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，位置是：%d\n", mid);
//			break;
//		}
//	}
//	return 0;
//}

//4、实现字符从两边逐渐打印出来：
//例：
//ranked up! diamond!
//r###########!
// ra#########d!
// ...
//
//int main()
//{
//	char arr1[] = "ranked up! diamond!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	//strlen记得引用头文件<string.h>
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//暂停一秒
//		system("cls");//清空屏幕
//		//上面两行代码需要引用头文件<windows.h>
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);//优化效果，再打一次
//	return 0;
//}

//5、模拟用户登录，三次错误就退出
//int main()
//{
//	int i = 0;
//	//假设密码是"a1b2c3"
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);
//		//if (password == "a1b2c3")//这种用法错误，两个字符串的比较不能使用==，应该使用strcmp函数，也需要引入string.h头文件
//		if (strcmp(password, "a1b2c3") == 0)//等于0即表示相等
//		{
//			printf("登录成功！\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误！\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("输入错误次数过多！\n");
//	}
//	return 0;
//}

//猜数字游戏：
//1、自动生成一个1-100之间的随机数
//2、猜数字
//	I、猜对了，会恭喜你，游戏结束
//	II、猜错了会提示大或者小，再继续猜，直到猜对为止
//3、如果不退出，游戏可以一直玩

void menu()
{
	printf("*********************************\n");
	printf("*********    1. Play    *********\n");
	printf("*********    0. Exit    *********\n");
	printf("*********************************\n");
}
void game()//猜数字游戏
{
	int guess = 0;
	int random = rand() % 100 + 1;//%100的余数是0-99，然后+1就是1-100了
	//1、先生成一个1-100的随机数，需要引用头文件<stdlib.h>
	//2、开猜：
	printf("请猜一个1-100的数字：");
	int i = 1;
	while (1)
	{
		scanf("%d", &guess);
		if (guess < random)
		{
			printf("小了呀\n");
			printf("你再猜：");
		}
		else if(guess > random)
		{
			printf("溜大了\n");
			printf("你再猜：");
		}
		else
		{
			break;
		}
		i++;
	}
	if (i < 8)
		printf("牛！%d次就猜对了", i);
	else
		printf("太拉了，%d次才猜对\n", i);
	printf("还要玩吗？\n");
}
int main()
{
	srand((unsigned int)time(NULL));//运用时间戳给随机数设置一个开始值，达到真随机的效果，运用srand函数
	//srand函数需要引用头文件<stdlib.h>，time函数需要引用头文件<time.h>
	int input = 0;
	do
	{
		menu();//打印菜单
		printf("输入1并按下回车开始游戏\n");
		printf("输入0退出游戏\n");
		scanf("%d", &input);//记得取地址！！！
		switch (input)
		{
		case 1:
			game();
			break;
		case 0: 
			printf("欢迎下次再玩\n");
			Sleep(1500);
			break;
		default:
			printf("输入错误，请重新选择！\n");
			break;
					}

	} while (input);
	return 0;
}