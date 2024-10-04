#include <iostream>

using namespace std;

int main()
{
	string nickname, course_year, school; 
	
	cout <<"Enter Your Nickname:"<<endl;
	cin >> nickname;
	cout <<"Enter Your Course-Year Level:"<<endl;
	cin >> course_year;
	cout << "Enter Your School:"<<endl;
	cin >> school;
	
	cout <<" Wow Congrats " << nickname << " ! " << course_year 
		 <<" is a nice course. And you are studying in " << school 
		 <<" Which is one of the Center of Excellence in Teriary Education. "<<endl; 
		
	return 0;
}