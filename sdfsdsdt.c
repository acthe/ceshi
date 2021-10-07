#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//当case较多相同输出时，可这样用
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{

	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日");
		break;
	case 6:
	case 7:
		printf("休息日");
		break;
	default:
		printf("你这个输入的不对吧小伙子");

			
	}

	return 0;
}



//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一");
//		break;//记得加break
//	case 2:
//		printf("星期二");
//	case 3:
//		printf("星期三");
//	case 4:
//		printf("星期四");
//
//	}
//	return 0;
//}
//


//输出100以内奇数 第二种 玛德弱智
//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		printf("%d\n", a);
//		a += 2;
//	}
//	return 0;
//}


//输出100以内的奇数
//int main()
//{
//	int a = 0;
//	while(a <= 100)
//	{
//		if (a % 2 == 1) 或者：a%2!=0
//			printf("%d\n", a);
//		a++;
//	}
//
//
//	return 0;
//}


//判断一个数是否是奇数
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//		printf("是奇数");
//	else
//		printf("不是奇数");
//	return 0;
//}


//int main()
//{
//	int num = 4;
//	if (5 == num)
//	{
//		printf("呵呵");
//	}
//	printf("不是5噢");
//	return 0;
//}


//两个if在一起时记得加{}哟~~~
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("只有一个");
//	}
//		else
//		printf("hahhahhaha");
//	return 0;
//}

//int main()
//{
//	int age = 10;
//	if (age >= 18 && age < 28)
//		printf("成年");
//	else
//		printf("小屁孩");
//
//	return 0;
//}


//
//struct Book
//{
//	char name[20];
//	short prive;
//
//};
//int main()
//{
//
//	struct Book b1 = { "c语言程序设计",55 };
//	struct Book* pb = &b1;
//	strcpy(b1.name, "C++");
//
//
//	
//	//printf("书名：%s\n", b1.name);
//	//printf("价格：%d\n", b1.prive);
//	
//	printf("书名：%s\n", pb->name);
//	printf("价格：%d\n", (*pb).prive);
//
//	return 0;
//}
//



//创建一个结构体类型
//struct Book
//{
//	char name[20];//此去经年
//	short price;//50
//
//};
//int main()
//{
//	struct Book b1 = { "此去经年" ,50};
//	struct Book*pb = &b1;
//	b1.name = "C++";
	//printf("%d\n", pb->price);
	//printf("%s\n", pb->name);
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);

	//printf("书名：%s\n", b1.name);
	//printf("价格：%d元\n", b1.price);
//
//	return 0;
//}
// 
// 
//
//int main()
//{
//	double d = 3.13;
//	double*pd = &d;
//	*pd = 2.222;
//
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));//指针变量所占空间大小都是4字节
//	printf("%d\n", sizeof(pd));
//	printf("%d\n", sizeof(pd));
//
//	return 0;
//}

//int main()
//{
//	int a = 10;//申请了4个字节的空间
//	//int* p = &a;  *代表p是指针变量
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}