#define _CRT_SECURE_NO_WARNINGS 1;

//#include<stdio.h>
//int main()
//{
//	int age = 0;
//	scanf_s("%d", &age);
//	if (age < 18)
//		printf("����");
//	else if (age < 30 && age>18)
//		printf("����");
//	else if (age < 50 && age>30)
//		printf("׳��");
//	else if (age < 80 && age>50)
//		printf("����");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	//int b = a / 2;
//	if (a%2==0)
//	{
//		printf("a��ż��");
//	}
//	else
//	{
//		printf("a������");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//		for (i = 0;i <= 100;i++)
//		{
//			if (i % 2 == 1)
//			{
//				static int a = 1;
//				printf("��%d�δ�ӡ��", a);
//				printf("%d\n", i);
//				a++;
//			}
//		}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		printf("hehe");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch);
//	return 0;

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	while ((i = getchar()) != EOF)
//	{
//		putchar(i);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < 3;i++)
//	{
//		for (;j < 3;j++)
//		{
//			printf("hehe\n");
//		}
//            
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d\n", i);
//		i++;
//	} while (i < 10);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 1;
//	int all = 0;
//	for (n = 1;n <= 3;n++)
//	{
//		for (i = 1;i <=n;i++)
//		{
//			sum *= i;
//		}
//		all += sum;
//	}
//	//printf("n�Ľ׳�Ϊ%d", sum);
//	printf("1�Ľ׳˼ӵ�3=%d", all);
//	return 0;
//}
//1+2+6=9
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1;n <= 10;n++)
//	{
//		int ret = 1;
//		for (i = 1;i <= n;i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int ret = 1;
//    int n = 1;
	int sum = 0;
	//scanf("%d", &n);
	//for (i = 1;i <= n;i++)
	//{
	//	ret *= i;
	//}
//	for (n = 1;n <= 3;n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d", ret);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = (right + left) / 2;
//	while (arr[mid] != k)
//	{
//		if (arr[mid] > k)
//		{
//			right = mid-1;
//			mid = (right + left) / 2;
//		}
//		else if(arr[mid]<k)
//		{
//			left = mid+1;
//			mid = (right + left) / 2;
//		}
//	}
//
//	printf("�ҵ��ˣ��±��ǣ�%d", mid);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±�Ϊ%d\n",mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���");
//	return 0;
//}
//
//#include<stdio.h>
//	int main()
//	{
//		char arr1[] = { "        " };
//		char arr2[] = { "********" };
//		int left = 0;
//		int right = strlen(arr1)-1;
//		while (left < right)
//		{
//			arr1[left] = arr2[left];
//			printf("%s\n", arr1);
//			left++;
//		}
//
//		return 0;
//	}
//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//	char arr1[] = { "*****" };
//	char arr2[] = { "sdfhks"};
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left <= right)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		printf("%s\n", arr1);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//		
//	}
//	return 0;
//
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char ch[20] = {0};
//	int i = 0;
//	for (i = 0;i <3; i++)
//	{
//		printf("����������");
//		scanf("%s", &ch);
//		if (strcmp(ch, "123456") == 0)
//		{
//			printf("��¼�ɹ�");
//			break;
//		}
//		else
//		{
//			printf("�������!");
//		}
//	}
//	if (i == 3)
//	{
//		printf("�������δ������룬�˳���¼��\n");
//	}
//
//	return 0;
//}
#include<stdio.h>
void menu()
{
	printf("********************\n");
	printf("********1.paly******\n");
	printf("********2.exit******\n");
	printf("********************\n");
}
int game()
{
	int a = rand();
	int b = 0;
	printf("�²�a�Ƕ��٣�\n");
	while (a != b)
	{
		scanf("%d", &b);
		if (b> a)
		{
			printf("�´���,����������");
		}

		else if (b < a)
		{
			printf("��С�ˣ�����������");
		}

	}
	printf("�¶��ˣ�a��%d", a);
}
int main()
{
	menu();
	int input = 0;
	do
	{
		scanf("%d", &input);
		if (input == 1)
		{
			printf("����Ϸ\n");
			game();
		}
	} while (input == 1);
	printf("�˳���Ϸ");
	return 0;
}