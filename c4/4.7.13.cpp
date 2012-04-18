#include <iostream>
#include <vector>
#include <math.h>
#include "../perf.h"

using namespace std;

int main() {
	vector<int> primes;
	int max;
	Perf p;
	
	cout << "Please input a max ( >=2 ) number: " << endl;
	cin >> max;
	if (max < 3) { 
		cout<< "Input Must >= 2." << endl;
		return 0;
	}
	
	bool isPrime;
	
	p.start();
	for (int i=0; i<max; i++) {
		primes.push_back(i);
	}
	int border = sqrt((double)max) + 1;
	for (int i=2; i<border; i++) {
		for (int j=2; i*j<max; j++) {
			primes[i*j] = 0;
		}
	}
	
	p.stop();
	
	int count = 0;
	for (int i=0; i<primes.size(); i++) {
		if(primes[i] != 0) {
			// cout << primes[i] << "\n";
			count ++;
		}
	}
	
	
	cout << "found " << count << " primes under " << max << endl;
	cout << p.get_result() << endl;

	return 0;

}