#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//���������������������
// ������
// ��������Ǳ��������÷�Χ�����������������������{}�������ڲ�
// ȫ�ֱ����������������������
// 
// ��ͬԴ�ļ���ȫ�ֱ�����Ҫ��ǰ����
//ʹ��external���

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

//�������ڣ�
// ��������������ָ���Ǳ����Ĵ���������֮���ʱ��Ρ�
// 
// �ֲ��������������ڣ��������ڵľֲ���Χ��ʼ���������ڵľֲ���Χ����
// ȫ�ֱ������������ڣ��������������
//

//int main()
//{
//	{
//		int a = 10;
//			printf("%d\n", a);
//	}
//	return 0;
//}

//������
// 1�����泣��
//int main()
//{
//	3.14;
//	10;
//	'a';
//	'abcdef';
//
//	return 0;
//}


//2��const���εĳ�����
//int main()
//{
//	//const int num = 10;//num�ͱ��涨Ϊ�˳����������г����ԣ����ܱ��ı䡣
//	//num = 20;
//	
//	//int arr[10] = { 0 };//10��Ԫ��
//	//const int n = 10;//���ܱ�const���Σ�n��������Ȼ�Ǳ���
//	//int arr[n] = { 0 };//arr[10]��n�Ǳ����ģ����Ի��ǲ�������ô��
//
//	return 0;
//}

//// 3��#define����ı�ʶ������
//#define max 10000;
//// ��ʶ������ĳ������ɸ��ġ�
//
////4��ö�ٳ��� 
//// ���ڿ���һһ�оٵĳ���
////�����Ա����ڵȣ����Ա�Ϊ��
//
//enum Sex//ö�����
//{
//	//����ö�����͵ı�����δ������ȡֵ��ֻ����������
//	MALE = 3,//����ֵ
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	//Ĭ�ϻ��0��ʼ���������ǿ����ڶ����ʱ�򸳳�ֵ
//	return 0;
//}

//�ַ�����ת���ַ���
//�ַ�������һ���ַ�����˫������������һ���ַ�
//int main()
//{
//	"hello world";
//	return 0;
// }
//
 //�����ı�����\0

//int main()
//{
	//�ַ����� - ������һ����ͬ���͵�Ԫ��
	//�ַ����ڽ�β�ĵط�������һ��\0���ַ�
	//\0���ַ����Ľ�����־�����ַ�����֤��
	
	//char arr [ ] = "hello";

	//char arr1[] = "abc";
	//char arr2[] = { 'a', 'b','c' };

	//����1����ӡ�ַ���
	//printf("%s\n", arr1);//��\0��ֻ���ӡabc
	//printf("%s\n", arr2);//û��\0�����ӡ����һ�����룬


	//char arr1[] = "abc";
	//char arr2[] = { 'a', 'b','c' ,'\0' };//����\0����ֻ�����abc

	//printf("%s\n", arr1);
	//printf("%s\n", arr2);

	//����2�����ַ����ĳ���
	//int len = strlen("abc");//string length����Ҫ��������ͷ�ļ�<string.h>
	//printf("%d\n", len);

	//printf("%d\n", strlen(arr1));
	//printf("%d\n", strlen(arr2));//�������ֵ����һֱ�����ҵ���һ��\0Ϊֹ

	//char arr1[] = "abc";
	//char arr2[] = { 'a', 'b','c' ,'\0' };//����\0����ֻ�����3

	//printf("%d\n", strlen(arr1));
	//printf("%d\n", strlen(arr2));

//	return 0;
//}

//ת���ַ���
// ��������Ҫ��ӡc:\program file\lol
// ����ab\ncd
//ת���ַ���ȫ��ͼ���ļ��� 
//

//int main()
//{
//	printf("c:\program file\lol");
//	printf("ab\ncd");//�������޷�ʵ�֣�����ת���ַ�
//	return 0;
//}
//
//int main()
//{
//	printf("c:\\program file\\lol");
//	printf("ab\\ncd");//ʹ��ת���ַ�\\��б��ת��
//	return 0;
//}
//printf�ڴ�ӡ���ݵ�ʱ�򣬿���ָ����ӡ�ĸ�ʽ
//printf("%d",100)���ݣ�d���ͣ�f���㣬ld��double
// printf("%c",'a')�ַ�
// printf("%s","abc")�ַ���

//
//int main()
//{
//	printf("%c\n", '\130');//8���Ƶ�130��10���Ƶ�88
//	//X ��ASCII��ֵ����88�����Ի�õ����X
//
//	return 0;
//}

//���ѡ��
//���֧��if��䣩
//
//int main()
//{
//	int input = 0; //set a input viriable
//	printf("�м�Ȱ�ˣ�:>\n");
//	printf("ҪȥȰ����(1/0)��:>\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("�ϴ�ֿ���happy��\n");
//	else
//		printf("��\n");
//
//		return 0;
//}

//��ѭ����䣨for���/while��䣩

//int main()
//{
//	int elo = 0;
//	while (elo<11401)
//	{
//		printf("��ǹȥ�������Σ�Ŀǰ��λ��:%d\n",elo);
//			elo++;
//	}
//
//	printf("�Ҳ���ʯ�磡\n");
//
//	return 0;
//}

//������
//����ӷ�

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
//	//sumup = x + y;//�Ⲣ�Ǻ������㷨
//	int sumup = sum(num1, num2);
//	printf("%d\n", sumup);
//
//	return 0;
//}

//����
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	//....��������ռ�ռ䣬ʹ������
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//�������±�������
//	int i = 0;
//		while (i < 10)
//		{
//			printf("%d", arr[i]);
//			i++;
//		}
//
//	char ch[5] = { 'a','b','c' };//����ȫ��ʼ����ʣ���Ĭ��Ϊ0
//
//	return 0;
//}

//��������
//������������+ - * / %�Ӽ��˳�ģ
// ��λ��������>>	<<���ƶ����Ƕ�����λ
// λ��������&��λ�ࣻ|��λ��^��λ���
// ����
// CSDN�в��ͣ�https://blog.csdn.net/Lumos_1/article/details/124305289
//��Ҳ����html�ļ�����
//
