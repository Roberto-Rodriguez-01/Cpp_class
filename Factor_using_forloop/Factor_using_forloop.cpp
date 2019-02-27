#include <iostream>
#include <string>
using namespace std;
int main() {
	for (;;) {
		string yesorno;
		cout << "Input a value greater than 0 but less than or equal to 100" << endl << ":";
		cin >> input;
		if (!cin) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "no letter or symbols \n \n";
			continue;
		}
		if (input <= 0) {
			cout << "Sorry the input value has to be greater then 0 \n";
			cout << "Try again \n \n";
			continue;
		}
		else if (input > 100) {
			cout << "Input a value that is less than 100 \n Try again \n \n";
			continue;
		}
		else if (input > 0 and input <= 100) {
			int i = 0;
			cout << "the answer is ... \n";
			for (i = 1; i <= input; i++){
				if (input % i == 0)
					cout << i << "\n";
			}
			cout << "\n";
			cout << "Do you want to coninue? y/n \n";
			cout << ":";
			cin >> yesorno;
			cout << "\n";
			for(;;) {
				if (yesorno == "y" or yesorno == "Y") {
					break;
				}
				else if (yesorno == "n" or yesorno == "N") {
					cout << "Good Bye :] \n";
					system("PAUSE");
					return 0;
				}
				else if (yesorno != "y" or yesorno != "Y" or yesorno != "n" or yesorno != "N") {
					cout << "Inputed something other than y or n \n";
					cout << "Do you want to coninue? y/n \n";
					cout << ":";
					cin >> yesorno;
					cout << "\n";
				}
			}
		}
	}
}
