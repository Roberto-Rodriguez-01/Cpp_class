#include <iostream>
#include <string>
using namespace std;
int main(){
	while (true) {
		cout << "Input a value greater than 0 but less than or equal to 100" << endl << ":";
		int input;
		cin >> input;
		if (!cin) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "input value cannot be letter or symbols \n \n";
			continue;
		}
		if(input <= 0){
			cout << "input value has to be greater then 0 \n \n";
			continue;
		}
		else if(input > 100){
			cout << "Input a value has to be less than 100 \n \n";
			continue;
		}
		else if(input > 0 and input <= 100){
			int i = 0;
			cout << "the answer is ... \n";
			while (i <= input){
				++i;
				if (input % i == 0) {
					cout << i << "\n";
					continue;
				}
			}
			while (true) {
				cout << "\n";
				cout << "Do you want to coninue? y/n \n";
				cout << ":";
				string yesorno;
				cin >> yesorno;
				cout << "\n";
				if (yesorno == "y" or yesorno == "Y") {
					break;
				}
				else if (yesorno == "n" or yesorno == "N") {
					cout << "Good Bye :] \n";
					system("PAUSE");
					return 0;
				}
				else if (yesorno != "y" or yesorno != "Y" or yesorno != "n" or yesorno != "N") {
					cout << "inputted something other than y or n \n";
					continue;
				}
			}
			while (true){
				cout << "would you like to clear the screen? y/n \n";
				cout << ":";
				string clear;
				cin >> clear;
				if (clear == "y" or clear == "Y") {
					system("CLS");
					break;
				}
				else if (clear == "n" or clear == "N") {
					cout << "\n";
					break;
				}
				else if (clear != "y" or clear != "Y" or clear != "n" or clear != "N") {
					cout << "inputted something other than y or n \n \n";
					continue;
				}
			}
		}
	}
}