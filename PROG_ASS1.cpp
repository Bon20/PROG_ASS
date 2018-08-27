#include <iostream>
#include <string>
using namespace std;

bool boolVAlue(string pin)
{
bool status = true;
if (pin.length() !=4)
{
	status = false;
}
return status;
}

int main()

{
	
	string PIN;
	cout << "Enter a 4 digit number to get in the examination : "<< endl;
	cin>>PIN;

	
	if (boolVAlue(PIN)==1)
		cout << "PIN accepted.";
	else
		cout<< " PIN rejected";
	cout<< endl;
	
	cout <<"________________________________"<< endl;
	cout << "Hello! This is feet to meter"<< endl;
	cout <<          "converter"           << endl;
	cout <<"________________________________" << endl;
	cout << endl;

	float feet, meters;
	
	cout << "How many feet would you like to convert into meters?" << endl;
	cin >> feet;
	
	meters = feet * 0.3048;
	
	cout << feet << " is " << meters << "meters"<< endl;
	cout << endl;
	

	cout << "Is the converter was helpful?" << endl;
	cout<< endl;
	cout << "Type Y if YES and N if NO (Y/N):";
	
	char choice;
	int choice_answer;
	int Y,N;
	cin >> choice;

	if (choice == 'Y')
	{
		cout << " Thank you for the appreciation :)" << endl;
	}
	else if (choice == 'N')
	{
		cout << " HUHU :("<< endl;

	}
	else 
	cout << "You don't follow the the instructions -_-" << endl;
	return 0;
}
