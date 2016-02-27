#include <iostream>
#include <string>
using namespace std;

class Fraction
{
	int Numa, Deno;

public:
	void getNumDenom(int, int);
	void setNumDenom(int, int);
	int add()
	{
		return Numa + Deno;
	}
	int subtract()
	{
		return Numa - Deno;
	}
	int multiply()
	{
		return Numa*Deno;
	}
	float divide()
	{
		return Numa / Deno;
	}

};

void Fraction::getNumDenom(int x, int y)
{
	Numa = x;
	Deno = y;
}

void Fraction::setNumDenom(int x, int y)
{
	cout << "The fraction is " << x << "/" << y << endl;
}


int main()
{
	Fraction ob;
	ob.getNumDenom(4, 3);
	ob.setNumDenom(4, 3);
	cout << " The sum of the numarator and the denominator is " << ob.add() << endl;
	cout << "The difference between the numarator and the denominator is " << ob.subtract() << endl;
	cout << "The product of the numarator and the denominator is " << ob.multiply() << endl;
	cout << "The Quotient is " << ob.divide() << endl;
}
