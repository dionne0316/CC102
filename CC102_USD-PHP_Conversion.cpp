#include <iostream>

using namespace std;

int main()

{
	double USDollar;
	double Peso;
	
	//Get the amount of US$
	cout <<"Enter US$ amount and refers"<<endl;
	cin >> USDollar;
	
	//Calculate the amount Peso
	Peso = 53.20 * USDollar;
	
	//Display the results
	cout << "US$" << Peso <<endl;
	
	return 0;
}