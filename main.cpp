#include <iostream>
using namespace std;

double addTwoNumbers(double num1, double num2)
{
	return num1 + num2;
}

int main()
{
	double userInput1, userInput2, sum;
		
	cout << "Input 2 numbers to add:";
	cin >> userInput1 >> userInput2;

	cout << addTwoNumbers(userInput1, userInput2);
	
	return 0;
}