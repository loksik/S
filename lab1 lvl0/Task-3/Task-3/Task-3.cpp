#include "pch.h"
#include<iostream>

using namespace std;

int main()
{
	int a = 20;
	int b;
	cout << "Enter a number from 1 to 100" << endl;
	cin >> b;
	if (a == b)
	{
		cout << b << " Yes try it's " << endl;
	}
	else
	{
		while (a != b)
		{
			if (a > b)
			{
				cout << b << " No it's not Bolishe" << endl;
			}
			else
			{
				cout << b << " No it's not Menishe" << endl;
			}
			cout << "Enter a number prefix" << endl;
			cin >> b;
			if (a == b)
			{
				cout << b << "Yes try it's " << endl;
			}
		}
	}
	return 0;
}