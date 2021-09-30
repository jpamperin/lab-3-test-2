#include <iostream>
#include<cmath>
#include<vector>
#include <map>
#include <fstream>
using namespace std;

float population(int a, int b, int c, int d, float sol)
{
	float com;
	a = a - sol;
	a *= a; // *=
	b = b - sol;
	b *= b;
	c = c - sol;
	c *= c;
	d = d - sol;
	d *= d;

	com = a + b + c + d;
	com /= 3;
	com = sqrt(com);
	return com;
}
int main()
{
	ifstream inFile;
	inFile.open("inMeanStd.dat");
	ofstream outFile;
	outFile.open("outMeanStd.dat");

	int a, b, c, d;
	float sol;
	cout << "enter 1st number:";
	cin >> a;
	cout << "enter 2nd number:";
	cin >> b;
	cout << "enter 3rd number:";
	cin >> c;
	cout << "enter 4th/last number:";
	cin >> d;


	sol = ((a + b + c + d) / 4);
	cout << "Shown here is the mean number" << sol <<
		endl << "This is the standard declaration number" << population(a, b, c, d, sol);
	outFile << "Shown here is the mean number" << sol <<
		endl << "This is the standard declaration number" << population(a, b, c, d, sol);
}

//Run program: Ctrl + F5 or debug > Start Without Debugging menu 
// Debug program: F5 or Debug > Start Debugging menu
