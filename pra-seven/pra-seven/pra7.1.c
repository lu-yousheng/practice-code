#define _CRT_SECURE_NO_WARNINGS
//��ӡ���������
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//1 5 10 10 5 1

//#include<stdio.h>
//int main(void)
//{
//	int arr[11][11] = { 0 };
//	int line = 10;
//	int up = 6;
//	//scanf("%d %d", &line,&up);
//	int i = 0;//����
//	for (i = 1;i <= line;i++)
//	{
//		arr[i][0] = up;
//		//��ӡ��ÿһ�е�����
//		int j = 0;
//		for (j = 0;j <i ;j++)
//		{
//			if (i >= 2)
//			{
//				arr[i][j + 1] = arr[i - 1][j] + arr[i - 1][j + 1];
//			}
//			printf("%d ", arr[i][j]);
//		}
//		//����
//		printf("\n");
//	}
//	return 0;
//}
//������
//A�������ң�B����c��C����d��d��c�ں�˵
//�ĸ�����ֻ��һ������˵�ٻ������������˶����滰
//д��һ���������������˭
//#include<stdio.h>
//int main(void)
//{
//	char killer = 0;
//	for (killer = 'A';killer <= 'D';killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("%c", killer);
//		}
//	}
//	return 0;
//}
//36ƥ��6���ܵ���û�м�����ȥ�������ٱ������ٴ�ȷ��36ƥ���ǰ����
//5λ�˶�Ա�μ���10����ˮ����������������Ԥ��������
//#include<stdio.h>
//int main(viod)
//{
//	short a = 0;
//	short b = 0;
//	short c = 0;
//	short d = 0;
//	short e = 0;
//	for (a = 1;a <= 5;a++)
//	{
//		for (b = 1;b <= 5;b++)
//		{
//			for (c = 1;c <= 5;c++)
//			{
//				for (d = 1;d <= 5;d++)
//				{
//					for (e = 1;e <= 5;e++)
//					{
//						if (((b == 2) + (a == 3)==1)//a
//							&& ((b == 2) + (e == 4)==1)//b
//							&& ((c == 1) + (d == 2)==1)//c
//							&& ((c == 5) + (d == 3)==1)//d
//							&& ((e == 4) + (a == 1)==1)==1)//e
//						{
//							if(a*b*c*d*e==120)
//							printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
#include<stdio.h>
int add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 2;
	int b = 3;
	add(a,b);
	int (*pf)(a, b) = &add;
	printf("%d %d", pf(a,b), (*pf)(6,7));

	return 0;
}