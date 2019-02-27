#include <iostream>
#include <string>
using namespace std;
/********Area Calculator********
Main
	Display Menu
	choose shape
		solve area for shape
			return value
		after 2 choices askes if you want to clear the screen
*/
void Trapazoid(void) { //Trapazoid Function
	double base1 = 0;
	double base2 = 0;
	double height = 0;
	double total_from_equation = 0;
	while (true) {
		cout << "base1 of Trapazoid?" << endl, cin >> base1;
		if (!cin) { // checks if cin is error state
			cin.clear(); //if error state then clear the error flags that are given
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); //helps in removing the input contents that could caused the read failure. I set to max value. the '\n' states that if a new line comes stop there. so max or newline whichever comes first.
			cout << "input value cannot be letter or symbols \n \n";
		}
		else {
			while (true) {
				cout << "base2 of Trapazoid?" << endl, cin >> base2;
				if (!cin) { // checks if cin is error state
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "input value cannot be letter or symbols \n \n";
				}
				else {
					while (true) {
						cout << "height of Trapazoid?" << endl, cin >> height;
						if (!cin) { // checks if cin is error state
							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							cout << "input value cannot be letter or symbols \n \n";
						}
						else {
							total_from_equation = ((base1 + base2)*.5)*height;
							cout << "The area of Trapazoid is: " << total_from_equation << endl << endl;
							return;
						}
					}
				}
			}
		}
	}
}
void triangle(void) { //Triangle Function
	double base1 = 0;
	double height = 0;
	double total_from_equation = 0;
	while (true) {
		cout << "base of triangle?" << endl, cin >> base1;
		if (!cin) { // checks if cin is error state
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "input value cannot be letter or symbols \n \n";
		}
		else {
			while (true)
			{
				cout << "height of triangle?" << endl, cin >> height;
				if (!cin) { // checks if cin is error state
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "input value cannot be letter or symbols \n \n";
				}
				else {
					total_from_equation = 0.5 * base1 * height;
					cout << "The area of triangle is: " << total_from_equation << endl << endl;
					return;
				}
			}
		}
	}
}
void ellipse(void) { //Ellipse Function
	double pi = 3.1415926535;
	double axis1 = 0;
	double axis2 = 0;
	double total_from_equation = 0;
	while (true) {
		cout << "axis1 of ellipse?" << endl, cin >> axis1;
		if (!cin) { // checks if cin is error state
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "input value cannot be letter or symbols \n \n";
		}
		else {
			while (true) {
				cout << "axis2 of ellipse?" << endl, cin >> axis2;
				if (!cin) { // checks if cin is error state
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "input value cannot be letter or symbols \n \n";
				}
				else {
					total_from_equation = pi * axis1 * axis2;
					cout << "The area of ellipse is: " << total_from_equation << endl << endl;
					return;
				}
			}
		}
	}
}
int choice(void) { //choice function (menu)
	int user_input;
	while (true) {
		cout << "Hello what shape would you like to calculate the area for?" << endl;
		cout << "Trapazoid = 1" << endl << "Triangle = 2" << endl << "Ellipse = 3" << endl << ": ";
		cin >> user_input;
		if (!cin) { // checks if cin is error state
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "input value cannot be letter or symbols \n \n";
			continue;
		}
		if (user_input > 3 or user_input < 0) {
			cout << "Invalid choice :[" << endl;
			continue;
		}
		else if (user_input == 1 or 2 or 3) {
			return user_input;
		}
	}
}
void clear(void) { //clear function asks the user every 2 times they use menu
	string yesorno;
	while (true)
	{
		cout << "would you like to clear you screen y/n ?\n: ";
		cin >> yesorno;
		if (yesorno == "y" or yesorno == "Y") {
			system("cls");
			return;
		}
		else if (yesorno == "n" or yesorno == "N") {
			return;
		}
		else {
			cout << "invalid choice \n";
			continue;
		}
	}
}
int close(void) { //askes 
	string choose;
	while (true) {
		cout << "would you like to close the program ? y/n \n: ", cin >> choose;
		if (choose == "y" or choose == "Y") {
			return 0;
		}
		else if (choose == "n" or choose == "N") {
			break;
		}
		if (choose != "y" or choose != "Y" or choose != "n" or choose != "N") {
			cout << "not a choice, retry \n";
		}
	}
}
int main()
{
	int i = 0;
	int userchoice;
	while (true) {
		i++;
		if (i == 3) {
			clear();
			i = 0;
			continue;
		}
		userchoice = choice();
		if (userchoice == 1)
		{
			Trapazoid();
		}
		else if (userchoice == 2)
		{
			triangle();
		}
		else if (userchoice == 3)
		{
			ellipse();
		}
		int a = close();
		if (a == 0) {
			return 0;
		}
		else {
			continue;
		}
	}
}
