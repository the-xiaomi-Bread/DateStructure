#define _CRT_SECURE_NO_WARNINGS 1

//#define greeting "good moring"
//
//int main()
//{
//	/*char name[40];
//	printf("What is your name?\n");
//	scanf("%s", name);
//	printf("hello,%s,%s\n", name, greeting);*/
//	int n = 0;
//	scanf("%d", &n);
//	n = -n - 1;
//	printf("%d", n);
//	return 0;
//}


#include"Queue.h"

test1()
{
	QE q;
	InitQE(&q);
	QEPuch(&q, 1);
	QEPuch(&q, 2);
	QEPuch(&q, 3);

	printf("%d \n", QEfront(&q));
	QEPop(&q);

	QEPuch(&q, 4);

	int size = QESize(&q);
	printf("size = %d\n", size);

	QEPuch(&q, 5);
	QEPuch(&q, 6);
	QEPuch(&q, 7);
	QEPuch(&q, 8);

	int a = QEfront(&q);
	int b = QEback(&q);
	int c = QESize(&q);
	printf("a_front = %d b_back = %d c_size= %d\n", a, b, c);

	while (!QEEmpty(&q))
	{
		printf("%d ", QEfront(&q));
		QEPop(&q);
	}


	QEDestroy(&q);
}

int main()
{
	test1();
	return 0;
}
