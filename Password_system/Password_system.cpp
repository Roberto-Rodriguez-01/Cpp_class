#include "Header.h"
using namespace std;

string old_password;
string name;
int main() {
	int i = 0;
	int x;
	while (true) {
		if (i == 1) {
			cout << "Hello " << name << "\n";
			cout << "what would you like to do today ?\n";
			cout << "1 - Change Password\n2 - name change\n3 - clear screen\n4 - exit\n", cin >> x;
			if (!cin) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Incorrect entry, try again";
				continue;
			}
			switch (x) {
			case 1: {
				is_user();
				constraints();
				old_password = password;
				continue;
			}
			case 2: {
				cout << "What would you like your new name to be?\n:", cin >> name;
				continue;
			}
			case 3: {
				system("cls");
				continue;
			}
			case 4: {
				cout << "Thanks for stoping by :] \n";
				system("pause");
				return 0;
			}
			default: {
				cout << "not a choice";
				break;
			}
			}
		}
		else if (i == 0) {
			i++;
			cout << "Hello new user i see you dont have a password or name, lets create one :] \n";
			cout << "Enter your name :";
			getline(cin, name);
			constraints();
			old_password = password;
			continue;
		}
	}
}