#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char ch = 'w';
	char* pc = &ch;	
	*pc = 'a';
	printf("%c\n", ch);
	printf("%d\n", sizeof(pc));

	return 0;
}


//int main()
//{
//	int a = 10;//4���ֽ� ���ڴ��ﴴ����һ������
//	int* p = &a;//����p�ռ� ������a�ĵ�ַ
//	*p = 20;//��20����*p����ռ���Ӷ��ı�a��ֵ
//	printf("a = %d\n", a);
//	return 0;
//}



//�������庯����
//int Max(int x, int y);
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}

//#define Max(x,y) (x>y?x:y)//��Ķ���
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max= %d\n", max);
//	max = Max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//

//�����ⲿ����
//int main()
//{
//	extern int g_val;
//	printf("%d\n", g_val);
//	 
//	return 0;
//}

//�Լ�������
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a= %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}


//void test()
//{
//	static int a = 1; //��a��Ϊ��̬�ľֲ�����
//	a++;
//	printf("a= %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}



//void test() ���ӡ5��2����Ϊÿ������test����ʱa�������¶�����
//{
//	int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{	
//		test();
//
//		i++;
//	}
//
//	return 0;
//}

//
//int main()
//{
//	//typedef - ���Ͷ���-�����ض���
//	typedef unsigned int u_int;
//	u_int num = 20;
//
//	unsigned int num = 20;
//
//
//	return 0;
//}


//int main()
//{
//	//register int a = 10;//�����a����ɼĴ�������
//	unsigned int a = -2;
//	printf("%d\n", a);
//	return 0;
//}



//���� �ӷ�
//int jiafa(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[4];//[]�±����ò����� ����arr�������±�Ϊ4��ֵ
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int sum = jiafa(a,b);//()---�������ò�����
//	printf("%d\n", sum);
//	return 0;
//}



//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	max = (a > b ? a : b);// ������������  if else�ļ��԰棬�ܼ�̣����� 
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	printf("%d\n", max);
//
//	return 0;
//}



//int main()//�߼��롢����&&���м�ȡ��  ��||������ȡ�档
//{
//	int a = 0;
//	int b = 1;
//	int c = a && b;    
//	printf("%d\n", c);
//	return 0;
//}


//int main()  //ǿ������ת��
//{
//	int a = (int)4.13;//double--int
//	
//
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int b = --a;
//	printf("a=%d b=%d\n",a, b);
//
//
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	//int b = a++;//����++����ʹ�ã���++ ����b=a ��b+1 
//	int b = ++a;//ǰ��++����++(˳�㷵��ֵ��a)����ʹ��
//
//	printf("a = %d b = %d\n", a, b);//a=11,b=10
//
//
//
//	return 0;



//}
//
//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(arr));//arr*4=6*24
//
//	return 0;
//} 



//���������������ֵ
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = 0;
//	max = Max(a, b);
//	printf("%d\n", max);
//	
//	return 0;
//}
