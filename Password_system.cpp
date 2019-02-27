#include "Header.h"
using namespace std;

string name;
void password_requirements(void) {
	int length_of_password, y, a, b, c, d, e, f, g;
	string password;
	regex length("[ -~]{8,}");
	regex number("[0-9]+");
	regex special("[\W_]+");
	regex letter("[a-zA-Z]");
	regex upperletter("[A-Z]");
	regex lowerletter("[a-z]");
	regex whitespace("[\S]+");
	while (true) {
		cout << "would you like to 1 - create a password\n2 - randomly generate a password\n:", cin >> y;
		switch (y) {
		case 1: {
			cout << "What would you like you password to be\n"
				<< "---constraints on your password---\n"
				<< "1 - Password must be at least 8 characters\n"
				<< "2 - Password must contain at least one number\n"
				<< "3 - Password must contain at least one special character\n"
				<< "4 - Password must contain at least one letter\n"
				<< "5 - Password must contain at least one upper case letter \n"
				<< "6 - Password must contain at least one lower case letter\n"
				<< "7 - Password must not contain a whitespace character (space, tab, newline character)\n"
				<< "8 - If you are changing old password, the new password can't match old password\n"
				<< ":", cin >> password;
			cout << password << endl;

			system("pause");
			if (a = 1 and b == 1 and c == 1 and d == 1 and f == 1 and g == 1) {
				cout << "Your password %s has been accepted as it met all requirments. \n", password;
				system("pause");
				return;
			}
			else
			{

				break;
			}
		}
		case 2: {
			cout << "Welcome to auto password creator, how long would you like your password to be ? has to be greater than or = to 8/n", cin >> length_of_password;
			while (true) {

			}
		}
		default:
			cout << "not a choice";
			break;
		}
	}
}

int main() {
	int i = 0;
	int x;
	while (true) {
		if (i == 1) {
			cout << "Hello %s\n", name;
			cout << "what would you like to do to day ?\n";
			cout << "1 - Change Password\n2 - name change\n3 - clear screen\n4 - exit\n", cin >> x;
			if (!cin) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Incorrect entry, try again";
				break;
			}
			switch (x) {
			case 1: {
				password_requirements();
				break;
			}
			case 2: {
				cout << "What would you like your new name to be?\n:", cin >> name;
				break;
			}
			case 3: {
				system("cls");
				break;
			}
			case 4: {
				cout << "Thanks for stoping by";
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
			cout << "Enter your name", cin >> name;
			password_requirements();
			break;
		}
	}
}