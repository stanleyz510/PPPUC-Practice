#include <iostream>
#include <string>

using namespace std;

int main() {
	
	double a, b, av, bv;
	string au, bu;
	
	
	while (cin>>a>>au>>b>>bu) {
		
		// calculate av for comparison
		if (au == "in") av = a * 2.54;    // inch to cm
		else if (au == "ft") av = a * 12 * 2.54;  // feet to cm
		else if (au == "m") av = a * 100;  // m to cm
		else if (au == "cm") av = a;  // just cm
		else { 
			cout << a << au << "Please input the unit, only 'cm', 'in', 'ft', 'm' are acceptable"; 
			continue; 
		}
		
		// calculate bv for comparison
		if (bu == "in") bv = b * 2.54;    // inch to cm
		else if (bu == "ft") bv = b * 12 * 2.54;  // feet to cm
		else if (bu == "m") bv = b * 100;  // m to cm
		else if (bu == "cm") bv = b;  // just cm
		else { 
			cout << b << bu << ": Please input the unit, only 'cm', 'in', 'ft', 'm' are acceptable" << endl;; 
			continue; 
		}
		
		if ( ((av - bv) < 0.01) && ((av - bv) > -0.01) ) {
			cout << a << au << " is almost equal to " << b << bu << endl;
			continue;
		}
		
		if ( av < bv ) {
			cout << a << au << " is smaller to " << b << bu << endl;
			continue;
		}
		
		if ( av > bv ) {
			cout << a << au << " is bigger to " << b << bu << endl;
			continue;
		}
		
		// cout << "a = " << a << au << "\nb = " << b << bu << endl;
	}
	
	
}