#include <iostream>

using namespace std;

int main()
{
	int user_input = 0;
	double base1 = 0;
	double base2 = 0;
	double height = 0;
	double pi = 3.141;
	double axis1 = 0;
	double axis2 = 0;
	double total_from_equation = 0;

	cout << "Hello what shape would you like to calculate the area for?" << endl;
	cout << "Trapazoid = 1" << endl << "Triangle = 2" << endl << "Ellipse = 3" << endl;
	cin >> user_input;
	if (user_input == 1) 
	{
		cout << "base1 of Trapazoid?" << endl, cin >> base1;
		cout << "base2 of Trapazoid?" << endl, cin >> base2;
		cout << "height of Trapazoid?" << endl, cin >> height;
		total_from_equation = ((base1 + base2)*.5)*height;
		cout << "The area of Trapazoid is: " << total_from_equation << endl;
	}
	else if (user_input == 2) 
	{
		cout << "base of triangle?" << endl, cin >> base1;
		cout << "height of triangle?" << endl, cin >> height;
		total_from_equation = 1 / 2 * base1 * height;
		cout << "The area of Trapazoid is: " << total_from_equation << endl;
	}
	else if (user_input == 3) 
	{
		cout << "axis1 of ellipse?" << endl, cin >> axis1;
		cout << "axis2 of ellipse?" << endl, cin >> axis2;
		total_from_equation = pi * axis1 * axis2;
		cout << "The area of Trapazoid is: " << total_from_equation << endl;
	}
	else 
	{
		cout << "Invalid choice :[" << endl;
	}
	system("PAUSE");
	return 0;
}
