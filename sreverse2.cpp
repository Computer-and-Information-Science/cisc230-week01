#include <iostream>
#include <string>
using namespace std;

string reverse (const string& s);

int main() {
	string str;
	cout << "Enter a string: ";
	getline(cin, str);
	cout << reverse(str) << endl;
	return 0;
}

string reverse (const string& s) {
	if (s.size() > 1)
		return reverse(s.substr(1)) + s.substr(0, 1);
	return s;
}