#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

 //��֧����ѭ�����
//��֧��
// if��swith
// 
// ѭ����
// while��for��do while
// 
// goto���

//һ���ֺŸ����ľ���һ�����

//if��䣺

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age <18)
//	{
//		printf("δ����");
//	}
//	else if(age>=18 && age<30)
//	{
//		printf("����\n");
//	}
//	else if (age >= 30 && age60)
//	{
//		printf("׳��\n");
//	}
//	else
//	{
//		printf("����\n");
//	}
//	return 0;
//}

//ע������else������
//�磺
//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe");
//	else
//		printf("haha");//else���ҽ�������������ifƥ�䣬����������ʲô�������ӡ
//	return 0;
//}

//�ж��Ƿ�Ϊ������
//int main()
//{
//	int a = 5;
//	if (1 == a % 2)
//	{
//		printf("����");
//	}
//	else
//	{
//		printf("ż��");
//	}
//	return 0;
//} 

//����1-100������
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

//switch��䣺
//�϶��֧������£��������뼸��������ڼ�
//Switch�����α��ʽ
//{
//		����
//}
//

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ");
//		break;
//	case 2:
//		printf("���ڶ�");
//		break;
//	case 3:
//		printf("������");
//		break;
//	case 4:
//		printf("������");
//		break;
//	case 5:
//		printf("������");
//		break;
//	case 6:
//		printf("������");
//		break;
//	case 7:
//		printf("������");
//		break;
//	}
//	return 0;
//}

//����1-5�����������
// 6-7�������Ϣ��
// 
//break�����Ǳ����
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
//		printf("������");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��");
//		break;
//	default:
//		printf("������1-7������");
//		break;//default���Է����κ�λ�ã�����ϰ�ߣ����������
//	}
//	return 0;
//}

 //ѭ����
//while, do while, for
//��while ��ӡ1-10
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			//break;//break��while����е��÷�������������ֹѭ��
//			i++;
//			continue;//continue��while�е��÷�������������ѭ��
//		}
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
//getchar ��putchar����ȡ�ַ��ʹ�ӡ�ַ�

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
	//����ctrl+z������ȡѭ��
}