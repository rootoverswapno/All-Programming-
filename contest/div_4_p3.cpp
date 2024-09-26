#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

string convertTo12HourFormat(string time24Hour) {
    int hours, minutes;
    char delimiter;
    stringstream cin(time24Hour);

    // Parse hours and minutes from the input string
    cin >> hours >> delimiter >> minutes;

    // Determine the period (AM or PM)
    string period = (hours >= 12) ? "PM" : "AM";

    // Convert hours to 12-hour format
    if (hours > 12) {
        hours -= 12;
    }

    // Format hours and minutes into a string in 12-hour format
    stringstream result;
    result << setfill('0') << setw(2) << hours << ":" << setw(2) << minutes << " " << period;
    return result.str();
}

int main() {
    int t;
    cin >> t; // Input the number of test cases

    while (t--) {
        string time24Hour;
        cin >> time24Hour; // Input the time in 24-hour format

        string time12Hour = convertTo12HourFormat(time24Hour);
        cout << time12Hour << endl; // Output the time in 12-hour format
    }

    return 0;
}
