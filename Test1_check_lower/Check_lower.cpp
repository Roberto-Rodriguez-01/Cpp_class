#include <iostream>
#include <string>
using namespace std;

int main() {
	string test_string;
	bool a = false;
	cout << "Input a string with a lowercase letter \n:", cin >> test_string;
	for (char x : test_string) {
		if (islower(x)) {
			a = true;
		}
		else {
			continue;
		}
	}
	if (a == true) {
		cout << "User input " << test_string << " contains a lowercase letter.\n";
	}
	else {
		cout << "User input " << test_string << " does not contain a lowercase letter.\n";
	}
}
