#include <iostream>
using namespace std;

double division(int nominator, int dinominoter) {
	double n = 0.0;
	try {
		if (dinominoter == 0)
			throw 0;
		else
			n = nominator / dinominoter;
	}
	catch (int& ex) {
		cerr << "Dinominoter is zero" << endl;
	}
	cout << "Program continue" << endl;
	return n;
}

int main() {
	double num = division(2, 0);
	return 0;
}