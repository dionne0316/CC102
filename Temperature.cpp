#include <iostream>

using namespace std;

int main ()
{
	int temperature;
	cout << "Enter the temperature: ";
	cin >> temperature;
	
	if (temperature < 32 ){
		cout << "Bring a haevy jacket." << endl;		
	} else if (temperature <=50){
		cout << "Bring a light jacket." << endl;
	} else {
		cout << "No jacket needed." << endl;
	}
	
	
	return 0;
}