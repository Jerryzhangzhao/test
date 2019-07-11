#include <iostream>
using namespace std;



int main()
{
	void testPP(int** p);
	void testP(int* p);

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

	return 0;
}

void testPP(int** p)
{
	cout << "---testPP---" << endl;
	cout << *(p[1]) << endl;
	*(p[1]) = 100;
	cout << *(p[1]) << endl;
}

void testP(int* p)
{
	cout << "---testP---" << endl;
	cout << *p << endl;
	cout << *(p + 1) << endl;
}
