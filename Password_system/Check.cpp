#include "Header.h"

using namespace std;

void check_all(string);

string password;

void is_user(){
	string response;
	cout << "Sorry " << name << " I have to make sure you are who you say you are \n";
	cout << "could you please enter you password for me.\n";
	while (true) {
		cin.ignore();
		getline(cin, response);
		if (response == password) {
			cout << "Thanks\n";
			return;
		}
		else {
			cout << "Thats not right, retry plz.\n";
			continue;
		}
	}
}

void constraints(void) {
	cout << "What would you like you password to be \"" << name << "\"\n"
		<< "---constraints on your password---\n"
		<< "1 - Password must be at least 8 characters\n"
		<< "2 - Password must contain at least one number\n"
		<< "3 - Password must contain at least one special character\n"
		<< "4 - Password must contain at least one letter\n"
		<< "5 - Password must contain at least one upper case letter \n"
		<< "6 - Password must contain at least one lower case letter\n"
		<< "7 - Password must not contain a whitespace character (space, tab, newline character)\n"
		<< "8 - If you are changing old password, the new password can't match old password\n"
		<< ":";
		cin.ignore();
		getline(cin, password);
	check_all(password);
}
void check_all (string password){
	bool a, b, c, d, e, f, g, h;
	a = b = c = d = e = f = false;
	g = h = true;
	while (true) {
		if (password.length() >= 8)
		{
			a = true;
		}
		for (char x : password)
		{
			if (isdigit(x))
			{
				b = true;
			}
			if (ispunct(x))
			{
				c = true;
			}
			if (isalpha(x))
			{
				d = true;
			}
			if (isupper(x))
			{
				e = true;
			}
			if (islower(x))
			{
				f = true;
			}
			if (isspace(x))
			{
				g = false;
			}
			if (password == old_password) {
				h = false;
			}
		}
		if (a == true and b == true and c == true and d == true and e == true and f == true and g == true and h == true) {
			cout << "Your password " << password << " has been accepted as it met all requirments. \n";
			system("pause");
			cout << "\n";
			return;
		}
		else if (h == false) {
			cout << "passwords cant be the same \n";
			system("pause");
			constraints();
		}
		else
		{
			cout << "your password password " << password << " does not meet the constraints try again" << endl;
			cout << "1 - Password must be at least 8 characters (" << boolalpha << a << ")\n"
				<< "2 - Password must contain at least one number (" << b << ")\n"
				<< "3 - Password must contain at least one special character (" << c << ")\n"
				<< "4 - Password must contain at least one letter (" << d << ")\n"
				<< "5 - Password must contain at least one upper case letter (" << e << ")\n"
				<< "6 - Password must contain at least one lower case letter (" << f << ")\n"
				<< "7 - Password must not contain a whitespace character (space, tab, newline character) (" << g << ")\n";
				system("pause");
			constraints();
		}
	}
}
