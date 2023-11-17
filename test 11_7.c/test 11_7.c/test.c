#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//typedef unsigned int uint;
//
//struct Node
//{
//	int data;
//	struct Node* next;
//} Node;
//int main()
//{
//	unsigned int num = 0;
//	uint num2 = 1;
//
//
//	return 0;
//
// }





//
//int main()
//{
//
//}
//void 不需要任何返回 
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//extern int g_val;
//
//int main()
//{
//	printf("%d", g_val);
//	return 0;
//}

//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d\n", z);
//	return 0;
//}

//
//int main()
//{
//	register int num = 3;//建议
//
//	return 0;
//}
//
//#define NUM 100
//
//#define ADD(x,y) ((x)+(y))

//int ADD(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	/*printf("%d\n", NUM);
//	int n = NUM;
//	printf("%d\n", n);
//	int arr [NUM] = { 0 };*/
//
//
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//
//	return 0;
//


//int main()
//{
//	int a = 10;
//	/*&a;*/
//	//printf("%p\n", &a);
//	int* p = &a;
//	//p就是指针变量
//	return 0;
//}


int main()
{
	int a = 10;
	int* p = &a;
	*p = 20;
	printf("%d", a);
	return 0;
}