#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double mass;
    int age;

    cout << "Enter the Mass of the Tree: ";
    cin >> mass;

    cout << "Enter the Age in Years: ";
    cin >> age;

    cout << "You entered the mass of " << mass << " and an age of " << age << " years.\n";

    cout.setf(ios::fixed);
    cout.precision(2);

    for(int agecount = age ; agecount <= (age+9); agecount++ ){

        cout << "Height of Tree after " << agecount << " years: " << sqrt(sqrt(mass * agecount)) << " meter(s)\n";

    }
    return 0;
