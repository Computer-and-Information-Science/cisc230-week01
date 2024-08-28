#include <iostream>
using namespace std;

unsigned int factorial (unsigned int n);

int main() {
	unsigned int num;
	cout << "Enter number: ";
	cin >> num;
	cout << num << "! = " << factorial(num) << endl;
	return 0;
}

unsigned int factorial (unsigned int n) {
	return n > 0 ? n * factorial(n - 1) : 1;
}