#include <iostream>

using namespace std;

int main() {
	int x = 20;
	int adder = 22;
	while (adder <= 50) {
		if (adder % 2 == 0) {
			x = x + adder;
			++adder;
			continue;
		}
		else {
			++adder;
			continue;
		}
	}
	cout << x << endl;
}
