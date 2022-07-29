#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//变量的作用域和生命周期
// 作用域：
// 作用域就是变量的作用范围，哪里能用哪里就是作用域。{}方括号内部
// 全局变量的作用域就是整个工程
// 
// 不同源文件的全局变量需要提前声明
//使用external语句

//extern int g;
//
//int main()
//{
//	printf("hehe\n");
//	int a = 10;
//	printf("a=%d\n",  a);
//
//	return 0;
//}

//生命周期：
// 变量的声明周期指的是变量的创建和销毁之间的时间段。
// 
// 局部变量的生命周期：进入所在的局部范围开始——出所在的局部范围结束
// 全局变量的生命周期：程序的生命周期
//

//int main()
//{
//	{
//		int a = 10;
//			printf("%d\n", a);
//	}
//	return 0;
//}

//常量：
// 1、字面常量
//int main()
//{
//	3.14;
//	10;
//	'a';
//	'abcdef';
//
//	return 0;
//}


//2、const修饰的常变量
//int main()
//{
//	//const int num = 10;//num就被规定为了常变量，具有常属性，不能被改变。
//	//num = 20;
//	
//	//int arr[10] = { 0 };//10个元素
//	//const int n = 10;//尽管被const修饰，n本质上仍然是变量
//	//int arr[n] = { 0 };//arr[10]中n是变量的，所以还是不可以这么用
//
//	return 0;
//}

//// 3、#define定义的标识符常量
//#define max 10000;
//// 标识符定义的常量不可更改。
//
////4、枚举常量 
//// 用于可以一一列举的常量
////比如性别，星期等，以性别为例
//
//enum Sex//枚举语句
//{
//	//这种枚举类型的变量的未来可能取值，只能是这三种
//	MALE = 3,//赋初值
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	//默认会从0开始计数，但是可以在定义的时候赋初值
//	return 0;
//}

//字符串和转义字符：
//字符串就是一串字符，用双引号括起来的一串字符
//int main()
//{
//	"hello world";
//	return 0;
// }
//
 //结束的标致是\0

//int main()
//{
	//字符数组 - 数组是一组形同类型的元素
	//字符串在结尾的地方隐藏了一个\0的字符
	//\0是字符串的结束标志（两种方法验证）
	
	//char arr [ ] = "hello";

	//char arr1[] = "abc";
	//char arr2[] = { 'a', 'b','c' };

	//方法1，打印字符串
	//printf("%s\n", arr1);//有\0，只会打印abc
	//printf("%s\n", arr2);//没有\0，会打印出来一堆乱码，


	//char arr1[] = "abc";
	//char arr2[] = { 'a', 'b','c' ,'\0' };//加入\0，就只会出现abc

	//printf("%s\n", arr1);
	//printf("%s\n", arr2);

	//方法2，求字符串的长度
	//int len = strlen("abc");//string length，需要额外引用头文件<string.h>
	//printf("%d\n", len);

	//printf("%d\n", strlen(arr1));
	//printf("%d\n", strlen(arr2));//会打出随机值，会一直计算找到下一个\0为止

	//char arr1[] = "abc";
	//char arr2[] = { 'a', 'b','c' ,'\0' };//加入\0，就只会出现3

	//printf("%d\n", strlen(arr1));
	//printf("%d\n", strlen(arr2));

//	return 0;
//}

//转义字符：
// 假设我们要打印c:\program file\lol
// 或是ab\ncd
//转义字符大全另附图在文件夹 
//

//int main()
//{
//	printf("c:\program file\lol");
//	printf("ab\ncd");//这样均无法实现，由于转义字符
//	return 0;
//}
//
//int main()
//{
//	printf("c:\\program file\\lol");
//	printf("ab\\ncd");//使用转义字符\\将斜杠转义
//	return 0;
//}
//printf在打印数据的时候，可以指定打印的格式
//printf("%d",100)数据，d整型，f浮点，ld是double
// printf("%c",'a')字符
// printf("%s","abc")字符串

//
//int main()
//{
//	printf("%c\n", '\130');//8进制的130是10进制的88
//	//X 的ASCII码值就是88，所以会得到结果X
//
//	return 0;
//}

//语句选择
//如分支（if语句）
//
//int main()
//{
//	int input = 0; //set a input viriable
//	printf("有架劝了！:>\n");
//	printf("要去劝架吗(1/0)？:>\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("上大分咯，happy！\n");
//	else
//		printf("死\n");
//
//		return 0;
//}

//如循环语句（for语句/while语句）

//int main()
//{
//	int elo = 0;
//	while (elo<11401)
//	{
//		printf("练枪去啦下三段！目前排位分:%d\n",elo);
//			elo++;
//	}
//
//	printf("我草钻石哥！\n");
//
//	return 0;
//}

//函数：
//例如加法

//int sum(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	//sumup = x + y;//这并非函数的算法
//	int sumup = sum(num1, num2);
//	printf("%d\n", sumup);
//
//	return 0;
//}

//数组
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	//....这种罗列占空间，使用数组
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//数组用下标来访问
//	int i = 0;
//		while (i < 10)
//		{
//			printf("%d", arr[i]);
//			i++;
//		}
//
//	char ch[5] = { 'a','b','c' };//不完全初始化，剩余的默认为0
//
//	return 0;
//}

//操作符：
//算数操作符：+ - * / %加减乘除模
// 移位操作符：>>	<<，移动的是二进制位
// 位操作符：&按位余；|按位或；^按位异或
// ……
// CSDN有博客，https://blog.csdn.net/Lumos_1/article/details/124305289
//我也另附了html文件在内
//
