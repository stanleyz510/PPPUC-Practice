#include <iostream>
#include <string>

using namespace std;

int main() {
	int a;
	cout << "Please input a number: " << endl;
	cin >> a;
	char c = a;
	int b = c;

	string s = "welcome, Stanley";
	cout << s << "'s size: " << s.length() << endl;

	if (a!=b) {
		cout << "oops!: " << a << " not equals to " << b << endl;		
	}
	else {
		cout << "Wow! we have large characters\n" << a << " == " << b << endl;
	}
	
}
