#include <iostream>
using namespace std;

class TestClass
{

public:
	TestClass(int a);
	int value;
};

TestClass::TestClass(int a)
{
	value = a;
}

int main()
{
	void testPP(int** p);
	void testP(int* p);
	void testPP_class(TestClass** p);

	int num1=1,num2 = 2;
	int **P;
	int *a[3];
	int *b[2][3];
	int c[2][3];

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
		{
			b[i][j] = &num1;
			c[i][j] = i + j+10;
		}

	for (int i = 0; i < 3; i++)
		a[i] = &num2;

	testPP(b[0]);
	testPP(a);
	testP(c[1]);


	TestClass testc(1);
	TestClass* testClass = new TestClass(2);


	TestClass *cls[2][3];
	testPP_class(cls[0]);

	return 0;
}

void testPP(int** p)
{
	cout << "---testPP---" << endl;
	cout << *(p[1]) << endl;
	*(p[1]) = 100;
	cout << *(p[1]) << endl;
	int a = 99;
	p[1] = &a;
	cout << *(p[1]) << endl;
}

void testP(int* p)
{
	cout << "---testP---" << endl;
	cout << *p << endl;
	cout << *(p + 1) << endl;
}

void testPP_class(TestClass** p)
{
	cout << "---testPP_class---" << endl;
	p[1] = new TestClass(2);
	cout << p[1]->value << endl;
}
