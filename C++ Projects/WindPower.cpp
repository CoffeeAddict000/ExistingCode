#include <iostream>

using namespace std;

int main(){
    double x; //avg wind speed
    double y; //operating efficiency
    double z; //blade radius

    cout << "Enter the Average Wind Speed (in m/s): ";
    cin >> x;
    cout << "\nEnter the Operating Efficiency[0-1]: ";
    cin >> y;
    cout << "\nEnter the Blade Radius (in meters): ";    
    cin >> z;

    cout.setf(ios::fixed );
    cout.precision(2);

    cout << "You entered an Average Wind Speed of " << x << " m/s\n" << "You entered an Operating Efficiency of " << y << " (" << y * 100 << "%)" << "\n" << "You entered a Blade Radius of " << z << " meters";

    double r = 0.5 * (1.2) * 3.14159265 * (z * z) * ( x * x * x); //Maximum power
    double n = r * y; //Actual Power

    cout << "\nThe Maximum Power is " << r << " W and the Actual Power is " << n << " W.";

    return 0;
}