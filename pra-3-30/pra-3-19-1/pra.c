#define _CRT_SECURE_NO_WARNINGS

//�����Լ���һ��ð������
//#include<stdio.h>
//void bobble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int tmp = 0;
//
//	//����һ�˵�����
//	for (i = 0;i < sz;i++)
//	{
//		//��������ÿ�����ཻ����������Ҳ����һ�����潻���Ĵ���
//		int j = 0;
//		for (j = 0;j < sz-i-1;j++)
//	    //�����1�Ƿ�ֹarr����Խ����ʵ��������δ֪��Ԫ�أ���Ϊi��ʼʱΪ0��
//		//��ζ��Ҫ����10�ν�����������10��Ԫ�ؽ���Ҫ9�ν������ɣ��������������Ҫ��1
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]) ;
//	bobble_sort(arr, sz);
//	print(arr, sz);
//}
//ѧϰʹ��qsort����

#include<stdio.h>
#include<stdlib.h>
//����Ĵ�ӡ����
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
}

//qsort�����еıȽϺ���
//int *cmp(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp);
//	print(arr, sizeof(arr) / sizeof(arr[0]));
//}
//struct stu
//{
//	char name[20];
//	int age;
//};
//int *cmp_age(void* e1, void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//void test2()
//{
//	struct stu arr[] = { {"zhangsan",29},{"lisi",25},{"wangwu",27} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_age);
//}
//int main(void)
//{
//	//test1();
//	test2();
//	return 0;
//}
//�Լ�ģ��ʵ��qsort����
#include<stdio.h>
struct stu
{
	char name[20];
	int age;
};

////e1��e2�ıȽϣ�����ֵ����1�����ж�e1����e2
//int cmp_bub(void* e1, void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
int* cmp_bub(void* e1, void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}

//����ַfit���ַlatָ������ݽ���
void swap(char* fit,char* lat,int size)
{
	int i = 0;
	char tmp = 0;
	for (i = 0;i < size;i++)
	{
		tmp = *fit;
		*fit = *lat;
		*lat = tmp;
		fit++;
		lat++;
	}
}
// int (__cdecl *compare )(const void *elem1, const void *elem2 ) );
void bubble_qort(void* arr, int sz, int size, int (*cmp_bub)(const void* e1, const void* e2))
{
	int i = 0;
	//һ�˵�����
	for (i = 0;i < sz;i++)
	{
		//һ������Ľ���
		int j = 0;
		for (j = 0;j < sz - 1 - i;j++)
		{

			//��δ֪����ǿ��ת��Ϊchar*���ͼ������ʹ�С�ɵõ�һ��Ԫ�ص��ֽڴ�С���Ϳ��Է��ʸ�Ԫ�ص�����
			if(cmp_bub(((char*)arr + (size * j)), ((char*)arr + size * (j + 1)))>0)
			{ 
				//������ĵ�һ��Ԫ�أ��ڶ���Ԫ�غ�Ԫ�ش�С����ȥʵ�ֽ���
				swap(((char*)arr + (size * j)), ((char*)arr + size * (j + 1)), size);//����
			}
		}

	}
}
//void test1()
//{
//	int arr[] = { 6,7,8,9,1,2,3,4,5,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_qort(arr, sz, sizeof(arr[0]), cmp_bub);
//	print(arr, sz);
//}
void test2()
{
	struct stu arr[] = { {"zhangsan",29},{"lisi",25},{"wangwu",27} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_qort(arr, sz, sizeof(arr[0]), cmp_bub);
}

int main()
{
	//test1();
	test2();
	return 0;
}