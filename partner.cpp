#include <iostream>

using namespace std;

string requestName();
double requestHeight(string fullName);
int requestNumberOfPartners();


int main() 
{
	string names[2];
	double heights[2];

	names[0] = requestName();
	heights[0] = requestHeight(names[0]);
	names[1] = requestName();
	heights[1] = requestHeight(names[1]);
	


	cout << "If " << names[0] << " and " << names[1];
	cout << " form a human tower, their combined height will be ";
	cout << (heights[0] + heights[1]) << endl;
	
}

string requestName()
{
	string name;
	cout << "Please enter full name: ";
	getline(cin, name);
	return name;
}

double requestHeight(string fullName)
{
	double height;
	cout << "Please enter " << fullName << "'s height: ";
	cin >> height;
	cin.ignore(); 
	
	return height;
}

int requestNumberOfPartners()
{
	int numberOfPartners; 
	cout << "How many partners are there?";
	cin >> numberOfPartners;
	
	return numberOfPartners;
}

