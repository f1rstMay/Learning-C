#define _CRT_SECURE_NO_WARNINGS 1
//һ�����ڴ����һ��
//д����
//1.д����������main������
//C���Դ����Ǵ��������ĵ�һ�п�ʼִ��
//main�����൱��һ�����
//һ���������ҽ���һ��main����
//һ�������п����ж��.c�ļ�
//���Ƕ��.c�ļ���ֻ����һ��main����

//��hello world��ʼ
//printf - �⺯�� - ����Ļ�ϴ�ӡ��Ϣ
//printf ��ʹ��Ҳ��Ҫ�������ã�������ͷ�ļ� stdio.h)

//����ע�� ctrl + k - ctrl +c
//����ȡ�� ctrl + k - ctrl +u

#include <stdio.h>

//int main()
//{
//	printf("hello world");
//
//	return 0;
//}


//int�����ͣ��������������ķ�������
//main�Ǻ�����
//{}�������Ǻ�����

//����+����+���д���
//ʹ�ÿ�ݼ�ctrl+F5
//�˵���-����-��ʼִ�У������ԣ�   
// 
//����ִ�е�̫�죬������
//Ϊ�˿������������һ��VS������
//�Ҽ���Ŀ����-����-��������-������-ϵͳ-��ϵͳ-����̨ vs22Ĭ�Ͼ���

//��������
// ��������� - д���� = ��������е�����
// ���������������������е�����
// e.g. �����̳� - �ϼ���Ʒ���۸� - 15.6Ԫ - С��
// C��������С��Ϊ - ������ - С������Ը���1.56*10^1
// ���� - 50��
// C������������Ϊ - ����
				
//a
//'a'�ַ�a

//int main()
//{
//	char ch = 'a';					//�ַ��������ͣ������ַ�ABCD
//	int age = 20;					//����;	long - ������;			long long - ����������
//	short num = 10;			//������
//	float weight = 55.5;		//�����ȸ�����;	double-˫���ȸ�����
//	return 0;
//}

//int main()
//{
//	printf("hello world\n");
//	printf("are you ok\n");
//	printf("%d\n",100);//��ӡ���� -%d
//	printf("%d\n", sizeof(char));			//1
//	printf("%d\n", sizeof(short));			//2
//	printf("%d\n", sizeof(int));				//4
//	printf("%d\n", sizeof(long));			//4    /C���Ա�׼��sizeof(long) >= sizeof(int)
//	printf("%d\n", sizeof(long long));	//8
//	printf("%d\n", sizeof(float));			//4
//	printf("%d\n", sizeof(double));		//8
//	//sizeof - �ؼ��� - ������ - �������ͻ�����ռ�ռ�Ĵ�С
//	//sizeof ��ĵ�λ���ֽ� byte
//	return 0;
//}

//������еĵ�λ��
// bit - ����λ 
// byte - �ֽ� = 8bit
// kb = 1024byte
// mb = 1024kb
// gb = 1024mb
// tb =1024gb
// pb = 1024tb

// ����
// ����//
			//ȫ�ֱ���
			//�ֲ�����

//��������ķ���
//���� + ������

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
//%d - ����
//%f - float
//%lf - double 
//

//int a = 100		//���������Ϊȫ�ֱ���
//int main()
//{
//	int a = 10;	//�������ڵ��Ǿֲ�����
//	//�ֲ�������ȫ�ֱ������Ƴ�ͻ������£��ֲ�����
//	//�������ȫ�ֱ����;ֲ�����������д����ͬ
//	return 0;
//}


//дһ�����������������ĺ�
//scanf���� �����뺯��
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	//�������취1���ڵ�һ�м���#define _CRT_SECURE_NO_WARNINGS 1
	//�������취2��ʹ��scanf_s���������Ƽ� - ����VS�����ṩ������C���Ա�׼�涨
	sum = a + b; 
	printf("sum = %d\n", sum);
	return 0;
}