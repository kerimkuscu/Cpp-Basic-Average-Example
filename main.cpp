#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	int number1, number2, number3, average;
	
	cout << "Please entered number 1 = ";
	cin >> number1;
	
	cout << "Please entered number 2 = ";
	cin >> number2;
	
	cout << "Please entered number 3 = ";
	cin >> number3;
	
	cout << "Number 1 = " << number1<<endl;
	cout << "Number 2 = " << number2<<endl;
	cout << "Number 3 = " << number3<<endl;
	
	average = (number1+number2+number3) / 3;
	
	cout << "Average of the three numbers = " << average;
	
	return 0;
}
