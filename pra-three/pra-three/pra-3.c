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
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//void menu()
//{
//	printf("********************\n");
//	printf("********1.paly******\n");
//	printf("********2.exit******\n");
//	printf("********************\n");
//}
//int game()
//{
//
//	int a = rand()%100+1;
//	int b = 0;
//	printf("�²�a�Ƕ��٣�->\n");
//	while (a != b)
//	{
//		scanf("%d", &b);
//		if (b> a)
//		{
//			printf("�´���,����������->\n");
//		}
//
//		else if (b < a)
//		{
//			printf("��С�ˣ�����������->\n");
//		}
//
//	}
//	printf("�¶��ˣ�a��%d\n", a);
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��->\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		 case 1:
//			printf("������\n");
//			game();
//			break;
//	     case 2:
//			 printf("�˳���Ϸ\n");
//			 break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("�Ӵ�С�����ǣ�%d %d %d",a,b,c );
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int line = 0;
//	for (i = 0;i <= 100;i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("��%d��", line);
//			printf("%d\n", i);
//			line++;
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	if(a<b)
//	{
//		int max = 0;
//		for (i = 1;i <= a;i++)
//		{
//			if (a % i == 0 && b%i == 0)
//			{
//				max=i;
//			}
//		}
//		printf("%d\n", max);
//
//	}
//	else
//	{
//		int max = 0;
//		for (i = 1;i <= b;i++)
//		{
//			if (b % i == 0 && a%i == 0)
//			{
//				max = i;
//			}
//		}
//		printf("%d\n", max);
//
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int t = 0;
//	while (a % b)
//	{
//		t = a % b;
//		a = b;
//		b = t;
//	}
//	printf("%d", t);
//	return 0;
//}
//��С��������???
//   
//#include<stdio.h>
//int main()
//{
//	int y = 0;
//	int line = 0;
//	for (y = 2000;y <= 3000;y++)
//	{
//		if ((y % 4 == 0) && (y % 100 != 0))
//		{
//			printf("%d ", y);
//			line++;
//		}
//		if (y % 400 == 0)
//		{
//			printf("%d \n", y);
//			line++;
//		}
//	}
//	printf("\n%d", line);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int all = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		if ((i % 2 != 0 && i % 3 != 0) && i%5 !=0)
//		{
//			printf("%d ", i);
//			all++;
//		}
//	}
//	printf("\n%d", all);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		int j = 0;
//		int a = 0;
//		for (j = 2;j < i;j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d������\n", i);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ��Խ���һ�����ڹػ���������룺Ī���������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "Ī�������") == 0)
//	{
//		system("shutdown -a");
//		printf("����������ȷʵ�Ǹ������");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//#include<stdio.h>
//int is_leap_year(int x)
//{
//	if (((x % 100 != 0) && (x % 4 == 0)) || (x % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000;y <= 2000;y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}
#include<stdio.h>
#include<string.h>
int find(int a[], int k, int s)
{
	int left = 0;
	int right = s;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (a[mid] < k)
		{
			left = mid + 1;
		}
		else if (a[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return 0;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int key = 19;
	if (find(arr, key, sz))
	{
		printf("�ҵ��ˣ��±�Ϊ%d", find(arr, key, sz));
	}
	else
	{
		printf("�Ҳ���");
	}
	return 0;
}
//void raise(int* x)
//{
//	(*x) ++;
//}
//int main()
//{
//	int num = 0;
//	printf("���ú���֮ǰ��%d\n", num);
//	//���ú���ʹ��num��ֵ����1
//	raise(&num);
//	printf("���ú���֮��%d\n", num);
//	raise(&num);
//	printf("���ú���֮��%d\n", num);
//
//	return 0;
//}