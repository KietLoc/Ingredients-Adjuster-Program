#include <iostream>
using namespace std;

//Base values
const double sugarBase = 1.50;
const double butterBase = 1.00;
const double flourBase = 2.75;
const int cookiesBase = 48;

//Calculate ratio
double calcRatio(int cookiesBase, int cookiesNew) 
{
	return static_cast<double>(cookiesNew) / cookiesBase;
}

//Calculate new ingredient amounts
void calcIngredients(int cookiesNew, double& sugarNew, double& butterNew, double& flourNew) 
{
	double ratio = calcRatio(cookiesBase, cookiesNew);
	sugarNew = sugarBase * ratio;
	butterNew = butterBase * ratio;
	flourNew = flourBase * ratio;
}

int main() 
{
	int cookiesNew;
	cout << "Enter the amount of cookies you want to make: ";
	cin >> cookiesNew;

	double sugarNew, butterNew, flourNew;

	calcIngredients(cookiesNew, sugarNew, butterNew, flourNew);

	cout << "Amount of ingredients are as follows:\n";
	cout << sugarNew << " cups of sugar\n";
	cout << butterNew << " cups of butter\n";
	cout << flourNew << " cups of flour\n";

	return 0;
}
