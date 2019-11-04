#include <iostream>
using namespace std;

double addTwoNumbers(double num1, double num2)
{
	double sum;
	sum = num1 + num2;
	return sum;
}

int main()
{
	double userInput1, userInput2, sum;
		
	cout << "Input 2 numbers to add:";
	cin >> userInput1 >> userInput2;

	sum = addTwoNumbers(userInput1, userInput2);
	cout << sum;

	return 0;
}