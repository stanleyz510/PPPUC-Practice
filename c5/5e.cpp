#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
try {
	/*
		code here
	*/
	
	
	return 0;
}

catch (exception& e) {
	cerr << "error: " << e.what() << endl;
	return 1;
}

catch (...) {
	cerr << "unknown exception!: " << endl;
	return 2;
}


}