#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 0,1,2,3,4 };
//	int arr1[] = { 5,6,7,8,9 };
//	int arr2[] = { 10,11,12,13,14 };
//	int* par[] = { arr,arr1,arr2 };
//	int i = 0;
//	for (i = 0; i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 5;j++)
//		{
//			//printf("%d ",*(par[i]+j));
//			printf("%d ", par[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = -1;
//	printf("%u", i);
//	return 0;
//}
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ����֮�ͣ�����a��һ������
//���磺2+22+222+2222+22222
//2+(2*10+2)+{2*100+(2*10+2)}+{2*1000+(2*100+(2*10+2))}
//#include<stdio.h>
//int main()
//{
//	int num = 2;
//	scanf("%d", &num);
//	int tmp = 0;
//	int creat = num;
//	int sum = 0;
//	int i = 0;
//	for (i = 10;i < 10001;i *= 10)//����10,100,1000
//	{
//		tmp = num * i;
//		creat += tmp;
//		printf("%d\n", creat);
//		sum += creat;
//	}
//	printf("%d", sum+2);
//	return 0;
//}
//#include<stdio.h>
//int main(viod)
//{
//	int num = 0;
//	int n = 0;
//	scanf("%d %d", &num, &n);
//	int ret = 0;
//	int sum = 0;
//	int i = 0;
//
//	for (i = 0;i < n;i++)
//	{
//		ret = ret * 10 + num;//����2,22,222,2222
//		printf("%d\n", ret);
//		sum += ret;//��ÿһ�����
//	}
//	printf("%d", sum);
//	return 0;
//}
//��ӡˮ�ɻ���
//���0-100000֮������ˮ�ɻ��������
// ˮ�ɻ�����ָһ��nλ�������λ���ֵ�n�η�֮�͵��ڸ�1������
// ��153=1^3+5^3+3^3,��153��һ��ˮ�ɻ�����
//
//#include<stdio.h>
//int main(void)
//{
//	//int num = 0;
//	int bod = 100000;//�߽�
//	//scanf("%d ", &bod);
//	int i = 0;
//	int tmp = 0;//��Ÿ�λ��
//	int ret = 0;//��λ�������
//	int sum = 0;//��λ����˺����
//	int tmp1 = 0;//���ȥ����λ������
//
//	for (i = 0;i < bod;i++)
//	{
//		//�ж��Ƿ�Ϊˮ�ɻ����ĺ���
//		tmp = 0;
//		ret = 1;
//		sum = 0;
//		tmp1 = 0;
//		if (i > 9)
//		{
//			tmp1 = i;
//			do
//			{
//				tmp = tmp1 % 10;//�����ÿλ���ĸ�λ
//				ret = tmp*tmp*tmp;//�ó�ÿλ�������η�
//				sum += ret;
//				tmp1 = tmp1 / 10;
//			} while (tmp1 > 0);
//			if (sum == i)
//				printf("%d\n", i);
//			else
//				continue;
//		}
//		else
//		{
//			if (i * i* i == i)
//				printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main(void)
//{
//	int i = 0;
//	for (int i = 0;i < 1000000;i++)
//	{
//		//�ж��Ƿ���������
//		//�ж�λ��
//		int tmp = 0;
//		int dig = 1;
//		tmp = i;//123
//		while (tmp/10)
//		{
//			dig++;
//			tmp /= 10;//12,1
//		}
//		//���ÿλ�������ĺ�
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, dig);//���λ����dig�η��ĺ�����pow��n��w��
//			tmp /= 10;
//		}
//		//�ж�
//		if (i == sum)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//��ӡһ������
//#include<stdio.h>
//int main(void)
//{
//	char arr[] = "*************";
//	char arr1[] = "            ";
//	int sl = strlen(arr)-1;
//	int mid = sl / 2;
//	int left = 0;
//	int right = 0;
//	arr1[mid] = arr[mid];
//	printf("%s\n", arr1);
//	left = mid - 1;
//	right = mid + 1;
//	while (right<sl)
//	{
//		arr1[left] = arr[left];
//		arr1[right] = arr[right];
//		printf("%s\n", arr1);
//		left--;
//		right++;
//	}
//	
//	return 0;
//}
//����ˮ���⣬һԪ������һƿ��ˮ��������ƿ������һƿ��ˮ��20��Ǯ���������ˮ��
//#include<stdio.h>
//int main(void)
//{
//	int money = 20;
//	int bottle = 0;
//	int price = 1;
//	int drink = 0;
//	scanf("%d", &money);
//	while (money)
//	{
//		//��Ǯ����ˮ
//		if (bottle != 2)
//		{
//			money -= price;
//			drink++;
//			bottle++;
//		}
//	    //��ƿ������ˮ
//		if (bottle == 2)
//		{
//			bottle = 0;
//			drink++;
//			bottle++;
//		}
//	}
//	printf("%d", drink);
//	return 0;
//}
//#include<stdio.h>
//int main(void)
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0;i <= 12;i++)
//	{
//		arr[i] = 0;
//		printf("hello bit");
//	}
//	return 0;
// //�����ѭ����ԭ��:1,i��arr�����Ǿֲ���������ջ���棬��ջ����ʹ�øߵ�ַ��ʹ�õ͵�ַ��
//2,��i�ȴ���֮����Ϊ�ߵ�ַ��arr�����i��˵�ǵ͵�ַ
//3,�����ڷ��ʵ�ʱ�����ɵ͵��ߵĵ�ַ���ʵ�
//4,�������Խ�����ʱ�ܴ��ʻ���ʵ�i�ĵ�ַ�ռ䲢�ҽ�i��ֵ�޸�Ϊ0�������ѭ��
//}

//�������е���������ǰ��Σ�ż�����ַ��ں��Ρ�
//#include<stdio.h>
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa = arr;
//	int* ta = arr;
//	int tmp = 1;
//	int i = 0;
//	while (pa < arr+9)
//	{
//		if ((*pa) % 2 == 0)
//		{
//			tmp = *pa;
//		}
//		else
//		{
//			*ta = *pa;
//			*pa = tmp;
//			ta = pa;
//		}
//		pa++;
//
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//void move(int* arr,int s)
//{
//	int odd[10] = { 0 };
//	int even[10] = { 0 };
//}
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sa = sizeof(arr) / sizeof(arr[0]) - 1;
//	move(arr,sa);
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}