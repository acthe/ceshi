#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//��case�϶���ͬ���ʱ����������
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
		printf("������");
		break;
	case 6:
	case 7:
		printf("��Ϣ��");
		break;
	default:
		printf("���������Ĳ��԰�С����");

			
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
//		printf("����һ");
//		break;//�ǵü�break
//	case 2:
//		printf("���ڶ�");
//	case 3:
//		printf("������");
//	case 4:
//		printf("������");
//
//	}
//	return 0;
//}
//


//���100�������� �ڶ��� �������
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


//���100���ڵ�����
//int main()
//{
//	int a = 0;
//	while(a <= 100)
//	{
//		if (a % 2 == 1) ���ߣ�a%2!=0
//			printf("%d\n", a);
//		a++;
//	}
//
//
//	return 0;
//}


//�ж�һ�����Ƿ�������
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//		printf("������");
//	else
//		printf("��������");
//	return 0;
//}


//int main()
//{
//	int num = 4;
//	if (5 == num)
//	{
//		printf("�Ǻ�");
//	}
//	printf("����5��");
//	return 0;
//}


//����if��һ��ʱ�ǵü�{}Ӵ~~~
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("ֻ��һ��");
//	}
//		else
//		printf("hahhahhaha");
//	return 0;
//}

//int main()
//{
//	int age = 10;
//	if (age >= 18 && age < 28)
//		printf("����");
//	else
//		printf("Сƨ��");
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
//	struct Book b1 = { "c���Գ������",55 };
//	struct Book* pb = &b1;
//	strcpy(b1.name, "C++");
//
//
//	
//	//printf("������%s\n", b1.name);
//	//printf("�۸�%d\n", b1.prive);
//	
//	printf("������%s\n", pb->name);
//	printf("�۸�%d\n", (*pb).prive);
//
//	return 0;
//}
//



//����һ���ṹ������
//struct Book
//{
//	char name[20];//��ȥ����
//	short price;//50
//
//};
//int main()
//{
//	struct Book b1 = { "��ȥ����" ,50};
//	struct Book*pb = &b1;
//	b1.name = "C++";
	//printf("%d\n", pb->price);
	//printf("%s\n", pb->name);
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);

	//printf("������%s\n", b1.name);
	//printf("�۸�%dԪ\n", b1.price);
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
//	printf("%d\n", sizeof(double*));//ָ�������ռ�ռ��С����4�ֽ�
//	printf("%d\n", sizeof(pd));
//	printf("%d\n", sizeof(pd));
//
//	return 0;
//}

//int main()
//{
//	int a = 10;//������4���ֽڵĿռ�
//	//int* p = &a;  *����p��ָ�����
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}