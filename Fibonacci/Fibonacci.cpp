// Fibonacci.cpp : Defines the entry point for the console application.
// Jadedrock@gmail.com
// 8/6/2016
//Prints out Fibonacci Sequence, using recursion.
//Sample Output 5, 1 1 2 3 5

#include "stdafx.h"
#include <iostream>
using namespace std;


int fibonacci(int n)
{
  return (n<=1)? 1 : fibonacci(n - 1) + fibonacci(n - 2);	
}

int main()
{
	int n;
	cout << "Fibonacci Sequence, Give me a Int: ";
	cin >> n;

	if (n < 0)
	{
		return -1; // This means there was an error
	}

	for (int i = 0; i < n; i++)
	{	
		cout << fibonacci(i) << " ";
	}
	
	//Finish the Program.
	cout << '\n';
	system("pause"); //puts press any key to continue...
    return 0;
}

