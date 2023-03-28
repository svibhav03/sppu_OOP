#include <iostream>
using namespace std;

class Complex
{
	float real;
	float img;
public:
	Complex()
	{
		real = 0.0;
		img = 0.0;
	}

	friend istream& operator >>(istream& i, Complex& O)
	{
		cout << "Enter real part:" << endl;
		i >> O.real;
		cout << "Enter imaginary part:" << endl;
		i >> O.img;
		return i;
	}
	friend ostream& operator <<(ostream& c, Complex& O)
	{
		c << O.real << " + " << O.img << "i" << endl;
		return c;
	}
	Complex operator +(Complex O)
	{
		Complex r1;
		r1.real = real + O.real;
		r1.img = img + O.img;
		return r1;
	}
	Complex operator -(Complex O)
	{
		Complex r2;
		r2.real = real - O.real;
		r2.img = img - O.img;
		return r2;
	}
	Complex operator*(Complex O)
	{
		Complex r3;
		r3.real = (real * O.real) - (img * O.img);
		r3.img = (real * O.img) + (img * O.real);
		return r3;
	}
};
int main()
{
	Complex c1, c2, c3;
	int choice;
	char ans;
	cout << "Default constructor value=" << endl;
	cout << c1;
	do
	{
		cout << "\nEnter the 1st no." << endl;
		cin >> c1;
		cout << "\nEnter the 2nd no." << endl;
		cin >> c2;
		cout << "1. Addition" << endl;
		cout << "2. Subtraction" << endl;
		cout << "3. Multiplication" << endl;
		cout << "Enter Choice:" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			c3 = c1 + c2;
			cout << "Addition is: " << endl;
			cout << c3;
			break;
		case 2:
			c3 = c1 - c2;
			cout << "Subtraction is: " << endl;
			cout << c3;
			break;
		case 3:
			c3 = c1 * c2;
			cout << "Multiplication is: " << endl;
			cout << c3;
			break;
		default:
			cout << "Wrong Choice:" << endl;
		};
		cout << "Do you want to Continue?(y/n):" << endl;
		cin >> ans;

	} while (ans == 'y' || ans == 'Y');
	return 0;
}
