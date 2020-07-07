#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << "Conditionals" << endl;
	cout << "Quadratic function" << endl;

	float a, b, c;
	float rootx, rooty, DNE;
	float discriminant;

	//aX^2+bX+c
	cout << "Enter the values of a, b and c of the quadratic equation: " << endl;
	cin >> a >> b >> c;

	discriminant = (b * b) - (4 * a * c);

	if (discriminant > 0) {
		rootx = (-b + sqrt(discriminant)) / (2 * a);
		rooty = (-b - sqrt(discriminant)) / (2 * a);

		cout << "Two distinct and real root exists: " << rootx << " and " << rooty << endl;
	}
	else if (discriminant == 0) {
		rootx = -b / (2 * a);
		rooty = rootx;
	}
	else {
		rootx = rooty = -b / (2 * a);
		DNE = sqrt(-discriminant) / (2 * a);

		cout << "Twi distinct complex roots exists: " << rootx << " + i " << DNE << " and " << rooty << " -i " << DNE << endl;
	}

	return 0;
}