#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password);//123456//password��һ���������������Ҫȡ��ַ
//	printf("��ȷ�����루Y/N)��>");
//	//��������
//	//getchar(); //���������ɾ�������
//	int tmp = 0;
//	while (tmp = getchar() != '\n')
//	{
//		;
//	}
//	//whileѭ��������ĺܸɾ�
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("ȷ��ʧ��");
//	}
//	return 0;
// }

//int main()//�������ӡ�����ַ�
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

//int main()//while��������������̫Զ
//{
//	int i = 1;//��ʼ������
//	while (i <= 10)//�жϲ���
//	{
//		printf("%d\n", i);
//		i++;//��������
//	}
//	return 0;
//}

//for(exp1, exp2, exp3)//�ֱ��ǳ�ʼ�����жϣ�����
//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		//if (i == 5)
//		//{
//		//	break;//
//		//	continue;//continue �� break ��for������÷�һ��
//		//}
//			
//		printf("%d\n", i);
//	}
//	return 0;
//}

//do while��䣺
//do
//	ִ��ѭ����
// while(���ʽ���ж����)
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

//��ϰ��
//1������n�Ľ׳ˣ�
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

//2������1!+2!+3!+......+10!
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

//3�������������в���ĳһ�����֣�
//ʹ�ò�루���֣����ҷ�
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//�趨һ����������
//	int key = 0;//Ҫ���ҵ�������key
//	int sz = sizeof(arr) / sizeof(arr[0]);//���������Ԫ�ظ���
//	scanf("%d", &key);//��������ҵ�����
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
//			printf("�ҵ��ˣ�λ���ǣ�%d\n", mid);
//			break;
//		}
//	}
//	return 0;
//}

//4��ʵ���ַ��������𽥴�ӡ������
//����
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
//	//strlen�ǵ�����ͷ�ļ�<string.h>
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//��ͣһ��
//		system("cls");//�����Ļ
//		//�������д�����Ҫ����ͷ�ļ�<windows.h>
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);//�Ż�Ч�����ٴ�һ��
//	return 0;
//}

//5��ģ���û���¼�����δ�����˳�
//int main()
//{
//	int i = 0;
//	//����������"a1b2c3"
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", password);
//		//if (password == "a1b2c3")//�����÷����������ַ����ıȽϲ���ʹ��==��Ӧ��ʹ��strcmp������Ҳ��Ҫ����string.hͷ�ļ�
//		if (strcmp(password, "a1b2c3") == 0)//����0����ʾ���
//		{
//			printf("��¼�ɹ���\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("�������������࣡\n");
//	}
//	return 0;
//}

//��������Ϸ��
//1���Զ�����һ��1-100֮��������
//2��������
//	I���¶��ˣ��ṧϲ�㣬��Ϸ����
//	II���´��˻���ʾ�����С���ټ����£�ֱ���¶�Ϊֹ
//3��������˳�����Ϸ����һֱ��

void menu()
{
	printf("*********************************\n");
	printf("*********    1. Play    *********\n");
	printf("*********    0. Exit    *********\n");
	printf("*********************************\n");
}
void game()//��������Ϸ
{
	int guess = 0;
	int random = rand() % 100 + 1;//%100��������0-99��Ȼ��+1����1-100��
	//1��������һ��1-100�����������Ҫ����ͷ�ļ�<stdlib.h>
	//2�����£�
	printf("���һ��1-100�����֣�");
	int i = 1;
	while (1)
	{
		scanf("%d", &guess);
		if (guess < random)
		{
			printf("С��ѽ\n");
			printf("���ٲ£�");
		}
		else if(guess > random)
		{
			printf("�����\n");
			printf("���ٲ£�");
		}
		else
		{
			break;
		}
		i++;
	}
	if (i < 8)
		printf("ţ��%d�ξͲ¶���", i);
	else
		printf("̫���ˣ�%d�βŲ¶�\n", i);
	printf("��Ҫ����\n");
}
int main()
{
	srand((unsigned int)time(NULL));//����ʱ��������������һ����ʼֵ���ﵽ�������Ч��������srand����
	//srand������Ҫ����ͷ�ļ�<stdlib.h>��time������Ҫ����ͷ�ļ�<time.h>
	int input = 0;
	do
	{
		menu();//��ӡ�˵�
		printf("����1�����»س���ʼ��Ϸ\n");
		printf("����0�˳���Ϸ\n");
		scanf("%d", &input);//�ǵ�ȡ��ַ������
		switch (input)
		{
		case 1:
			game();
			break;
		case 0: 
			printf("��ӭ�´�����\n");
			Sleep(1500);
			break;
		default:
			printf("�������������ѡ��\n");
			break;
					}

	} while (input);
	return 0;
}