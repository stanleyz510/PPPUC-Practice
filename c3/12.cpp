#include <stdio>

using namespace std;

int main() {
	int a = 20000;
	char c = a;
	int b = c;

	if (a!=b) {
		cout << "oops!: " << a << " not equals to " << b << endl;		
	}
	else {
		cout << "Wow! we have large characters" << endl;
	}
	
}
