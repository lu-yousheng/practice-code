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
#include<stdio.h>
int main()
{
	int i = 0;
		for (i = 0;i <= 100;i++)
		{
			if (i % 2 == 1)
			{
				static int a = 1;
				printf("��%d�δ�ӡ��", a);
				printf("%d\n", i);
				a++;
			}
		}
	return 0;
}