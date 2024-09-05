#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inches;
};

float add(Distance d1, Distance d2, bool isD1InFeet, bool isD2InFeet) {
    float d1InInches = isD1InFeet ? d1.feet * 12.0f : d1.inches;
    float d2InInches = isD2InFeet ? d2.feet * 12.0f : d2.inches;

    return d1InInches + d2InInches;
}

int main() {
    Distance d1, d2;
    char choice1, choice2;


    cout << "Enter the first distance in feet (f) or inches (i): ";
    cin >> choice1;

    if (choice1 == 'f') {
        cout << "Enter the distance in feet: ";
        cin >> d1.feet;
    } else if (choice1 == 'i') {
        cout << "Enter the distance in inches: ";
        cin >> d1.inches;
    } else {
        cout << "Invalid input!" << std::endl;
        return 1;
    }


    cout << "Enter the second distance in feet (f) or inches (i): ";
    cin >> choice2;

    if (choice2 == 'f') {
        cout << "Enter the distance in feet: ";
        cin >> d2.feet;
    } else if (choice2 == 'i') {
        cout << "Enter the distance in inches: ";
        cin >> d2.inches;
    } else {
        cout << "Invalid input!" << endl;
        return 1; 
    }


    float totalInches = add(d1, d2, choice1 == 'f', choice2 == 'f');

    cout << "Total distance in inches: " << totalInches << " inches" << endl;

    return 0;
}
