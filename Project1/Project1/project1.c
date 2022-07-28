#define _CRT_SECURE_NO_WARNINGS 1
//一定放在代码第一行
//写代码
//1.写出主函数（main函数）
//C语言代码是从主函数的第一行开始执行
//main函数相当于一个入口
//一个工程有且仅有一个main函数
//一个工程中可以有多个.c文件
//但是多个.c文件中只能有一个main函数

//从hello world开始
//printf - 库函数 - 在屏幕上打印信息
//printf 的使用也需要进行引用，（引用头文件 stdio.h)

//快速注释 ctrl + k - ctrl +c
//快速取消 ctrl + k - ctrl +u

#include <stdio.h>

//int main()
//{
//	printf("hello world");
//
//	return 0;
//}


//int是整型（整数），函数的返回类型
//main是函数名
//{}括号内是函数体

//编译+链接+运行代码
//使用快捷键ctrl+F5
//菜单栏-调试-开始执行（不调试）   
// 
//程序执行的太快，看不到
//为了看到结果，设置一下VS的属性
//右键项目名称-属性-配置属性-链接器-系统-子系统-控制台 vs22默认就是

//数据类型
// 计算机语言 - 写程序 = 解决生活中的问题
// 必须有能力来描述生活中的问题
// e.g. 购物商城 - 上架商品，价格 - 15.6元 - 小数
// C语言描述小数为 - 浮点数 - 小数点可以浮动1.56*10^1
// 年龄 - 50岁
// C语言描述整数为 - 整型
				
//a
//'a'字符a

//int main()
//{
//	char ch = 'a';					//字符数据类型，放入字符ABCD
//	int age = 20;					//整型;	long - 长整型;			long long - 更长的整型
//	short num = 10;			//短整型
//	float weight = 55.5;		//单精度浮点数;	double-双精度浮点数
//	return 0;
//}

//int main()
//{
//	printf("hello world\n");
//	printf("are you ok\n");
//	printf("%d\n",100);//打印整数 -%d
//	printf("%d\n", sizeof(char));			//1
//	printf("%d\n", sizeof(short));			//2
//	printf("%d\n", sizeof(int));				//4
//	printf("%d\n", sizeof(long));			//4    /C语言标准：sizeof(long) >= sizeof(int)
//	printf("%d\n", sizeof(long long));	//8
//	printf("%d\n", sizeof(float));			//4
//	printf("%d\n", sizeof(double));		//8
//	//sizeof - 关键字 - 操作符 - 计算类型或者所占空间的大小
//	//sizeof 算的单位是字节 byte
//	return 0;
//}

//计算机中的单位：
// bit - 比特位 
// byte - 字节 = 8bit
// kb = 1024byte
// mb = 1024kb
// gb = 1024mb
// tb =1024gb
// pb = 1024tb

// 常量
// 变量//
			//全局变量
			//局部变量

//定义变量的方法
//类型 + 变量名

//int main()
//{
//	int age = 20;
//	double weight = 110.3;
//
//	age = age + 1;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	return 0;
//}

//
//%d - 整形
//%f - float
//%lf - double 
//

//int a = 100		//方括号外的为全局变量
//int main()
//{
//	int a = 10;	//方括号内的是局部变量
//	//局部变量和全局变量名称冲突的情况下，局部优先
//	//不建议把全局变量和局部变量的名称写成相同
//	return 0;
//}


//写一个代码求两个整数的和
//scanf函数 是输入函数
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	//报错解决办法1：在第一行加入#define _CRT_SECURE_NO_WARNINGS 1
	//报错解决办法2：使用scanf_s函数，不推荐 - 仅由VS编译提供，不是C语言标准规定
	sum = a + b; 
	printf("sum = %d\n", sum);
	return 0;
}