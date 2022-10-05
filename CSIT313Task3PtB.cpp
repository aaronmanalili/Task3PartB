// CSIT 313 Task 3 Part B C++ Project by Aaron Manalili 3/2/2022

#include <iostream>
using namespace std;


int main()
{
	int rows;

	cout << ("How many rows do you want: ");
	cin >> rows;

	for (int i = 1; i <= rows; i++)
	{
		string star = "*";


		for (int j = 1; j <= i; j++)
		{
			cout << star;
		}
		cout << ("\n");

		
	}

	
}
