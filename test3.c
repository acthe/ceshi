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
//	int a = 10;//4个字节 在内存里创建了一个变量
//	int* p = &a;//创建p空间 用来存a的地址
//	*p = 20;//把20放在*p这个空间里，从而改变a的值
//	printf("a = %d\n", a);
//	return 0;
//}



//正常定义函数↓
//int Max(int x, int y);
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}

//#define Max(x,y) (x>y?x:y)//宏的定义
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

//引用外部变量
//int main()
//{
//	extern int g_val;
//	printf("%d\n", g_val);
//	 
//	return 0;
//}

//自己试了下
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
//	static int a = 1; //将a变为静态的局部变量
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



//void test() 会打印5个2，因为每次引用test函数时a都被重新定义了
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
//	//typedef - 类型定义-类型重定义
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
//	//register int a = 10;//建议把a定义成寄存器变量
//	unsigned int a = -2;
//	printf("%d\n", a);
//	return 0;
//}



//函数 加法
//int jiafa(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[4];//[]下标引用操作符 引用arr数组里下标为4的值
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int sum = jiafa(a,b);//()---函数调用操作符
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
//	max = (a > b ? a : b);// 条件操作符。  if else的简略版，很简短，舒适 
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	printf("%d\n", max);
//
//	return 0;
//}



//int main()//逻辑与、或。与&&：有假取假  或||：有真取真。
//{
//	int a = 0;
//	int b = 1;
//	int c = a && b;    
//	printf("%d\n", c);
//	return 0;
//}


//int main()  //强制类型转换
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
//	//int b = a++;//后置++，先使用，再++ 先让b=a 再b+1 
//	int b = ++a;//前置++，先++(顺便返还值给a)，再使用
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



//函数求两数的最大值
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
