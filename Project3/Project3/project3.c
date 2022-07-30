#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//预处理指令，不是关键字

//int main()
//{
//	int a = 0;
//
//	printf("%d\n", ~a);
//	//~是按位取反（按2进制取反），把所有2进制位的0变成1,1变成0。
//	//0的二进制 00000000 00000000 00000000 00000000
//	//~a取反       11111111 11111111 111111111 11111111
//	//整数在内存中储存的是补码
//	//一个整数的二进制表示有三种：
//	// 源码，反码，补码
//	// 以-1为例说明负数的计算方式
//	// 源码：10000000 00000000 00000000 00000001 //最高位为符号，然后直接写
//	// 反码：11111111 11111111 11111111 11111110 //源码符号位不变，其他全部反过来
//	// 补码：11111111 11111111 11111111 11111111 //反码+1
//	//
//	//对于正整数，源码反码补码相同。
//	//
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = ++a;//前置++，先自加（++),在赋值
//
//	int c = 10;
//	int d = c++;//后置++，先赋值后自加（++）
//	printf("%d\n", b);
//	printf("%d\n", a);
//	printf("%d\n", d);
//	printf("%d\n", c);
//
//	return 0;
//}

//使用括号进行强制类型转换
//int main()
//{
//	int a = (int) 3.14;
//
//	printf("%d\n", a);
//	return 0;
//}

//条件操作符：
//？：
// exp1 exp2 : exp3
// 如果exp1成立，计算exp2，整个表达式的结果是exp2
// 如果exp1不成立，计算exp3，整个表达式的结果是exp3
//例：
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//
//	//if (a > b)
//	//{
//	//	max = a;
//	//}
//	//else
//	//{
//	//	max = b;
//	//}
//	//上下等价
//	max = a > b ? a : b;
//
//	printf("%d", max);
//	return 0;
//}

//C语言常见关键字：
//1、C语言提供的，不能自己创建关键字
// 2、关键字不能作为变量名
// 3、常见关键字：
// auto; break; case; char; const; continue; default; do; double; else; enum; extern; float; for; goto; if; int; long; register; return; short; signed; sizeof; 
// static; struct; switch; typedef; union; unsigned; void; volatile; while
// auto - 自动的，每个局部变量都是auto修饰的，一般都省略
// enum - 枚举
// extern - 声明外部符号的
// register - 寄存器关键字
// 
//int main()
//{
//	register int num = 100;	//建议num的值存放在寄存器中
//
//	return 0;
//}
// 
// signed	- 有符号的
// unsigned	- 无符号的
// union - 联合体
// void - 无，空
// volatile - C语言暂时不讲
// typedef - 类型定义
// --类型重定义
// 例
//
//typedef unsigned int u_int;
//int main()
//{
//	unsigned int a = 100;
//	u_int b = 100;
//	return 0;
//}
//
//static - 静态的
//1、修饰局部变量
//2、修饰全局变量
// 3、修饰函数
// 例：局部
//
//void test()
//{
//	static int a = 1;//由于static修饰，这个局部变量a不会被销毁，本质上是改变了变量的存储类型。
//	a++;
//	printf("%d ", a); 
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
// 
// 例：全局
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);//static修饰全局变量，会使得这个全局变量只能在自己所在的源文件（.c)内部使用
//	return 0;
//}
// 全局变量之所以在其他源文件内部可以使用是因为，全局变量具有外部链接属性
// 但是被static修饰之后，就变成了内部链接属性，其他源文件就不能链接到这个静态的全局变量了
// 
// 例：函数
//extern int add(int , int);//声明函数（不声明也可以使用）
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("sum = %d\n", sum);//修饰函数时作用于全局变量效果类似。
//	return 0;
//}

//define
//1、定义符号或常量
//#define max 1000;
// 2、定义宏
//#define add(x,y)((x)+(y))
//
//int main()
//{
//	printf("%d\n", 4*add(2, 3));
//	return 0;
//}

//指针
// 内存
// 内存是怎么编号的：
// 32位 -- 有32根地址线 -- 物理线 -- 可通电 -- 正电1/负电0
// 64位 -- 
// 由电信号转换成数字信息，1和0组成的2进制序列
// 00000000 00000000 00000000 00000000
// ...
// 01111111 11111111 11111111 11111111
// 10000000 00000000 00000000 00000000
// ...
// 11111111 11111111 11111111 11111111
// 
// 一个这样的内存单元是多大空间：
// 共2^32个内存单元=4,294,967,296 bit
// =536,870,912 Byte
// =524,288 Kb
// =512 MB
// =0.5 GB
//
// 最小的单位是char- 1字节 - 1Byte - 8bit - 8个地址
//  最终一个内存单元就是一个字节，然后分配地址
//
//int main()
//{
//	int a = 10; //a 要在内存中分配空间，int - 4个字节
//	printf("%p\n", &a);//%p用来打印地址
//	//虽然占4个字节，但是之会显示第一个字节的地址
//	int * pa = &a;//pa是用来存放地址的，在C语言中pa叫做指针变量
//	//*说明pa是指针变量
//	//int说明pa指向的对象是int类型的
//	return 0;
//}
//
//指针就是地址
//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//	*pa = 20;//*解引用操作，*pa就是通过pa里的地址找到a
//	printf("%d\n", a);//通过直接修改a地址的数据达到修改a的效果
//	return 0;
//}
//指针的大小：
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(double*));
//	//均为8，指针都是用来存放地址的，因为指针是用来存放地址的，地址多大指针就多大
//	return 0;
//}
//

//结构体
// C语言描述对象的能力
//结构体可以让C语言创建新的类型出来
//例如创建一个学生：
struct stu
{
	char name[20];
	int age;
	double score;
};
//又例如创建一本书：
struct book
{
	char name[20];
	float price;
	char id[30];
};
int main()
{
	struct stu s={"张三", 20, 87.79};//创建一个叫张三的学生，结构体的创建和初始化
	printf("1:%s %d %lf\n", s.name, s.age, s.score);//结构体变量，用点来找到结构体内部的成员变量，第一次打印
	struct stu*ps = &s;

	printf("2:%s %d %lf\n", (*ps).name,(*ps).age,(*ps).score);//利用指针打印
	printf("3:%s %d %lf\n", ps->name,ps->age,ps->score);//用箭头直接指向
	//->的使用方式：
	//左边是结构体的指针，->，右边是结构体内部的成员变量名

	return 0;
}
//
