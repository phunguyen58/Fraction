#include<iostream>
using namespace std;

struct Fraction {
	int numberator, denominator;
};

struct Fraction p, d;

void Input(Fraction &p) {
	cout << "Input numberator: ";
	cin >> p.numberator;
	cout << "Input denominator: ";
	cin >> p.denominator;
}

void Output(Fraction p) {
	cout << "The fraction is: " << p.numberator << "/" << p.denominator << endl;
}

void InputExtra(Fraction& d) {
	cout << "Input one more fraction\n";
	cout << "Input numberator: ";
	cin >> d.numberator;
	cout << "Input denominator: ";
	cin >> d.denominator;
}

void OutputExtra(Fraction d) {
	cout << "The fraction extra is: " << d.numberator << "/" << d.denominator << endl;
}

void SumFraction(Fraction p, Fraction d) {
	int numberator = p.numberator * d.denominator + d.numberator * p.denominator;
	int denominator = p.denominator * d.denominator;
	int smaller = 0;
	if (numberator > denominator) {
		smaller = denominator;
		if (denominator < 0)
			smaller = -denominator;
	}
	else {
		smaller = numberator;
		if (numberator < 0)
			smaller = -numberator;
	}
	int gcd = 0;
	for (int i = 1; i <= smaller; i++)
		if (denominator % i == 0 && numberator % i == 0)
			gcd = i; 
	numberator = numberator / gcd;
	denominator = denominator / gcd;
	cout << p.numberator << "/" << p.denominator << " + " << d.numberator << "/" << d.denominator << " = "; 
	if (numberator == denominator)
		cout << 1;
	else if (numberator % denominator == 0)
		cout << numberator / denominator;
	else
		cout << numberator << "/" << denominator;
	cout << endl;
}

void DifferentFraction(Fraction p, Fraction d) {
	int numberator = p.numberator * d.denominator - d.numberator * p.denominator;
	int denominator = p.denominator * d.denominator;
	int smaller = 0;
	if (numberator > denominator) {
		smaller = denominator;
		if (denominator < 0)
			smaller = -denominator;
	}
	else {
		smaller = numberator;
		if (numberator < 0)
			smaller = -numberator;
	}
	int gcd = 0;
	for (int i = 1; i <= smaller; i++)
		if (denominator % i == 0 && numberator % i == 0)
			gcd = i;
	numberator = numberator / gcd;
	denominator = denominator / gcd;
	cout << p.numberator << "/" << p.denominator << " - " << d.numberator << "/" << d.denominator << " = ";

	if (numberator == denominator)
		cout << 1;
	else if (numberator % denominator == 0)
		cout << numberator / denominator;
	else
		cout << numberator << "/" << denominator;
	cout << endl;
}

void ProductFraction(Fraction p, Fraction d) {
	int numberator = p.numberator * d.numberator;
	int denominator = p.denominator * d.denominator;
	int smaller = 0;
	if (numberator > denominator) {
		smaller = denominator;
		if (denominator < 0)
			smaller = -denominator;
	}
	else {
		smaller = numberator;
		if (numberator < 0)
			smaller = -numberator;
	}
	int gcd = 0;
	for (int i = 1; i <= smaller; i++)
		if (denominator % i == 0 && numberator % i == 0)
			gcd = i;
	numberator = numberator / gcd;
	denominator = denominator / gcd;
	cout << p.numberator << "/" << p.denominator << " * " << d.numberator << "/" << d.denominator << " = ";

	if (numberator == denominator)
		cout << 1;
	else if (numberator % denominator == 0)
		cout << numberator / denominator;
	else
		cout << numberator << "/" << denominator;
	cout << endl;
}

void DivideFraction(Fraction p, Fraction d) {
	int numberator = p.numberator * d.denominator;
	int denominator = p.denominator * d.numberator;
	int smaller = 0;
	if (numberator > denominator) {
		smaller = denominator;
		if (denominator < 0)
			smaller = -denominator;
	}
	else {
		smaller = numberator;
		if (numberator < 0)
			smaller = -numberator;
	}
	int gcd = 0;
	for (int i = 1; i <= smaller; i++)
		if (denominator % i == 0 && numberator % i == 0)
			gcd = i;
	numberator = numberator / gcd;
	denominator = denominator / gcd;
	cout << p.numberator << "/" << p.denominator << " / " << d.numberator << "/" << d.denominator << " = ";

	if (numberator == denominator)
		cout << 1;
	else if (numberator % denominator == 0)
		cout << numberator / denominator;
	else
		cout << numberator << "/" << denominator;
	cout << endl;
}

void CheckFraction(Fraction p) {
	int numberator = p.numberator;
	int denominator = p.denominator;
	int smaller = 0;
	if (numberator > denominator) {
		smaller = denominator;
		if (denominator < 0)
			smaller = -denominator;
	}
	else {
		smaller = numberator;
		if (numberator < 0)
			smaller = -numberator;
	}
	int gcd = 0;
	for (int i = 1; i <= smaller; i++)
		if (denominator % i == 0 && numberator % i == 0)
			gcd = i;
	if (gcd == 1)
		cout << p.numberator << "/" << p.denominator << " is inrreducible fraction";
	else
		cout << p.numberator << "/" << p.denominator << " is not inrreducible fraction";
	cout << endl;
}

void ConvergenceFraction(Fraction p, Fraction d) {
	cout << "Convergence fraction\n";
	int temp = 0;
	if (p.denominator % d.denominator == 0) {
		temp = p.denominator / d.denominator;
		d.numberator *= temp;
		d.denominator *= temp;
	}
	else if (d.denominator % p.denominator == 0) {
		temp = d.denominator / p.denominator;
		p.numberator *= temp;
		p.denominator *= temp;
	}
	else {
		p.numberator *= d.denominator;
		p.denominator = p.denominator * d.denominator;
		d.numberator *= p.denominator;
	}
	cout << p.numberator << "/" << p.denominator << " and " << d.numberator << "/" << p.denominator;
	cout << endl;
}

void CheckFractionPositive(Fraction p) {
	if ((p.numberator > 0 && p.denominator > 0) || (p.numberator < 0 && p.denominator < 0))
		cout << p.numberator << "/"<< p.denominator <<" is a positive fraction";
	else
		cout << p.numberator << "/" << p.denominator << "This is not a positive fraction";
	cout << endl;
}

void CheckFractionNegative(Fraction p) {
	if ((p.numberator > 0 && p.denominator > 0) || (p.numberator < 0 && p.denominator < 0))
		cout << p.numberator << "/" << p.denominator <<" is not a negative fraction";
	else
		cout << p.numberator << "/" << p.denominator << "this is a negative fraction";
	cout << endl;
}

int CompairTwoFraction(Fraction p, Fraction d) {
	int temp1 = p.numberator * d.denominator;
	int temp2 = d.numberator * p.denominator;
	if (temp1 > temp2)
		return 1;
	else if (temp1 < temp2)
		return -1;
	else
		return 0;
}

void OutputCompair(Fraction p, Fraction d) {
	if (CompairTwoFraction(p, d) == 1)
		cout << "The first fraction bigger than the extra fraction";
	else if (CompairTwoFraction(p, d) == -1)
		cout << "The first fraction smaller than the extra fraction";
	else
		cout << "Two fraction is the same";
}

/*void MenuOptions(Fraction p, Fraction d) {
	cout << "-----------------MENU-----------------\n";
	cout << "1.Input and output the fraction\n";
	cout << "2.Sum of two fraction\n";
	cout << "3.Different of two fraction\n";
	cout << "4.Product of two fraction\n";
	cout << "5.Divide of two fraction\n";
	cout << "6.Check inrreducible of the fraction\n";
	cout << "7.Convergence the fraction\n";
	cout << "8.Check the fraction positive\n";
	cout << "9.Check the fraction negative\n";
	cout << "10.Compair two fraction\n";
	int option;
	do {
		cout << "Which is your choice: ";
		cin >> option;
	} while (option < 1 || option > 11);
}*/

int main() {
	Fraction p;
	Fraction d;
	Input(p);
	Output(p);
	InputExtra(d);
	OutputExtra(d);
	SumFraction(p, d);
	DifferentFraction(p, d);
	ProductFraction(p, d);
	DivideFraction(p, d);
	CheckFraction(p);
	ConvergenceFraction(p, d);
	CheckFractionPositive(p);
	CheckFractionNegative(p);
	OutputCompair(p, d);
	return 0;
}