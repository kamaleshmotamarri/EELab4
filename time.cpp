#include <iostream>
using namespace std;

void minutesToTime(int minute_value, int& hours, int& mins){
    hours = (minute_value / 60) % 12;
    mins = minute_value % 60;
}


int main(){
    char user_choice = 'y';
    int hours;
    int mins;
    int minute_value;

    while (user_choice != 'n'){
        cout << "Enter a number of minutes: ";
        cin >> minute_value;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input. Try again." << endl;
            continue;
}
        minutesToTime(minute_value, hours, mins);
        if (mins < 10)
        {
            cout << "Hours:minutes is " << hours << ":" <<"0" << mins << endl;
        }
        else
        {
            cout << "Hours:minutes is " << hours << ":" << mins << endl;
        }
        cout << "Continue? (y/n): ";
        cin >> user_choice;

    }
    return 0;

}