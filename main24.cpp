#include<iostream>
#include<windows.h>
#include<ctime>
#include<stdio.h>
using namespace std;
int main()
{
	/*SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	int a = 5;
	cout << "a = " << a << endl;
	int *pa = &a;
	int *pa2 = &a;
	*pa2 = 3;
	cout << "a = " << a << endl;
	cout << "pa = " << pa << endl;
	cout << "pa2 = " << pa2 << endl;
	cout << "*pa = " << *pa << endl;
	cout << "*pa2 = " << *pa2 << endl;
	printf("%i", a);*/
	int arr1[10][10];
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			arr1[i][j] = rand() % 10;
			printf(" % i", arr1[i][j]);
		}
		printf("\n");
	}
}
    