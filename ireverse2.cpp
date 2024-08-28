#include <iostream>
using namespace std;

void reverse (unsigned int n);

int main() {
	unsigned int num;
	cout << "Enter number: ";
	cin >> num;
	reverse(num);
	cout << endl;
	return 0;
}

void reverse (unsigned int n) {
	if (n) {
		cout << n % 10;
		reverse(n / 10);
	}
}