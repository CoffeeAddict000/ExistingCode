#include <iostream>

using namespace std;

int main(){

    int x; //Systolic Pressure
    int y; //Diastolic Pressure

    cout << "Enter your systolic pressure: ";
    cin >> x;

    cout << "Enter your diastolic pressure: ";
    cin >> y;

    cout << "\nYou entered a pressure of " << x << " / " << y << "\n" ;

    double z = double(x) - double(y); //Pulse Pressure

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Your pulse pressure is: " <<  z;

    if (z > 80)
    {
        cout << "\nYour pulse pressure is high.";
    }
    
    double a = double(y) + double( 0.33333333333 * z); //MAP

    cout << "\nYour mean arterial pressure is: " << a;

if(a < 60){

    cout << "\nYou should seek medical assistance.";
}
else{
    cout << "\nYour mean arterial pressure is within acceptable limits";
}

    return 0;
}