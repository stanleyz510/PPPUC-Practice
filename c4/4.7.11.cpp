#include <iostream>
#include <vector>
#include "../perf.h"

using namespace std;

int main() {
	vector<int> primes;
	int max;
	Perf p;
	
	cout << "Please input a max (>=2) number: " << endl;
	cin >> max;
	if (max < 3) {
		cout<< "Input Must >=2." << endl;
		return 0;
	}
	
	primes.push_back(2);
	bool isPrime;
	
	p.start();
	for (int i=2; i<max; i++) {
		isPrime = true;
		for (int j = 0; j<primes.size(); j++) {
			if (i % primes[j] == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			primes.push_back(i);
		}
	}
	p.stop();
	
	cout << "found " << primes.size() << " primes under " << max << endl;
	cout << p.get_result() << endl;
	
	/*
	for (int i=0; i<primes.size(); i++) {
		cout << primes[i] << "\n";
	}
	*/
	
	return 0;

}