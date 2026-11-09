#include <iostream>

using namespace std;

string requestName();
double requestHeight(string fullName);
int requestNumberOfPartners();
void displayResult(string names[], double heights[], int numberOfPartners);

int main() 
{
    int numberOfPartners = requestNumberOfPartners();
	string names[numberOfPartners];
	double heights[numberOfPartners];

    for (int i = 0; i < numberOfPartners; i++)
    {
        names[i] = requestName();
        heights[i] = requestHeight(names[i]);
    }

    displayResult(names, heights, numberOfPartners);
	
}

void displayResult(string names[], double heights[], int numberOfPartners)
{
	int totalHeight = 0;
    cout << "If ";
    for (int i = 0; i < numberOfPartners; i++)
    {
        if (i < numberOfPartners - 1)
        {
            cout << names[i] << " and ";
        }
        else{
            cout << names[i];
        }
        totalHeight += heights[i];

    }
    cout << " form a human tower, their combined height will be ";
    cout << totalHeight << endl;
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
	cout << "How many partners are there? ";
	cin >> numberOfPartners;
	cin.ignore();
	return numberOfPartners;
}

