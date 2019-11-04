#include <iostream>
using namespace std;

double simpleOperations(double num1, char oprtr,double num2)
{
	double sum;
// Switch statement identifiying which operation is being used and acting accordingly 
	switch (oprtr)
	{
	case '+':
		sum = num1 + num2;
		break;
	case '-':
		sum = num1 - num2;
		break;
	case '*':
		sum = num1 * num2;
		break;
	case '/':
		sum = num1 / num2;
		break;

	}
	return sum;
}

int main()
{
	double userInput1, userInput3;
	char userInput2;
		
	cout << "Input 2 numbers to add,subtract,multiply or divide:";
	cin >> userInput1 >> userInput2>>userInput3;

	cout << simpleOperations(userInput1, userInput2, userInput3);
	

	return 0;
}