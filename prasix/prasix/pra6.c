#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//void binary(int x,char* ch)
//{
//	//��ʮ���Ƴ���2�õ�����Ķ�������
//	while (x)
//	{
//		if (x % 2 == 0)
//		{
//			*ch = '0';
//		}
//		else
//		{
//			*ch = '1';
//		}
//		x /= 2;
//		ch++;
//	}
//	*ch = '\0';
//    //�����õĶ��������ó���ȷ�Ķ�������
//	char tmp = 0;
//	int left = 0;
//	int right = strlen(ch) - 1;
//	while (left <= right)
//	{
//		tmp = ch[left];
//		ch[left] = ch[right];
//		ch[right] = tmp;
//		left++;
//		right--;
//	}
//	
//}
////�����������1�ĸ���
//int Count_1(char* ch)
//{
//	int count = 0;
//	while (*ch != '\0')
//	{
//		if (*ch == '1')
//		{
//			count++;
//		}
//		ch++;
//	}
//	return count;
//}
////��ȫ32λ�Ķ�����
//void perfect_32b(char* original,char* complete)
//{
//	int first = 32 - strlen(original);
//	while (*original != '\0')
//	{
//		*(complete + first) = *(original);
//		complete++;
//		original++;
//	}
//
//}
////��ʼ������
//void InitArr(char* chech_32b)
//{
//	//int finish = strlen(chech_32b) - 1;
//	int i = 0;
//	for ( i = 0;i < 32;i++)
//	{
//		chech_32b[i] = '0';
//	}
//	chech_32b[32] = '\0';
//}
//int main()
//{
//	char chech[20] = { 0 };
//	char chech_32b[35] = { '0'};
//	//��ʼ������chech_32b��Ԫ�أ�ʹ���Ϊ��Ϊ0��32λ������
//	InitArr(chech_32b);
//	int count = 0;
//	scanf("%d", &count);
//	
//	//���������ת���ɶ����ƴ�������chech��
//	binary(count, chech);
//	
//	//��ȫ32λ�Ķ����ƣ��������Ʒ���chech_32b��ȫ0������
//	perfect_32b(chech, chech_32b);
//	printf("%s\n", chech);
//	printf("%s\n", chech_32b);
//	
//	//��ӡ����������1�ĸ���
//	//printf("%d", Count_1(chech));
//
//	return 0;
//}


//�ò�����д��һ�����Ķ�����1�ĸ���
//�ò�����д��һ���������Ƶ�żλ��������
//�ò�����д�������������Ʋ���ͬλ�ĸ���
//�ò�����д�����������������ܴ�������
//������������С��������

//������������С������
#include<stdio.h>
//int mini_cm(int x, int y)
//{
//	int mult = 1;
//	int tmp = 0;
//	if (x > y)
//	{
//		while (mult<=y)
//		{
//			tmp = x * mult;
//			if (tmp % y == 0)
//			{
//				return tmp;
//			}
//			mult++;
//		}
//	}
//	else
//	{
//		while (mult <= x)
//		{
//			tmp = y * mult;
//			if (tmp % x == 0)
//			{
//				return tmp;
//			}
//			mult++;
//		}
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d", mini_cm(a, b));
//}

//�����ӽ������ã��� i like you ��� you like i
int examine(char* orig)
{
	int count = 0;
	while (*orig != '\0')
	{
		if (*orig == ' ')
		{
			count++;
		}
		orig++;
	}
	return count;
}
void Inversion(char* original,char* piracy)
{
	int start = 0;
	int i = 0;
	int tmp = 0;
	while (examine(original))
	{
		int len = strlen(original);
		for (i = 0;i < len;i++)
		{
			if (*(original + i) == ' ')
				start = i + 1;
		}
		int tmp = start-1;
		while (*(original + start))
		{
			*piracy = *(original + start);
			piracy++;
			start++;
		}
		*piracy = ' ';
		piracy++;
		*(original + tmp) = '\0';
		
	}
	if(examine(original) == 0)
	{
		while (*original != '\0')
		{
			*piracy = *original;
			original++;
			piracy++;
		}
	}

}
int main()
{
	char sent_or[100] = { 0 };
	gets(sent_or);
	char sent_pi[100] = { 0 };
	Inversion(sent_or, sent_pi);
	printf("%s", sent_pi);
	return 0;
}