#include <iostream>
using namespace std;
int main(){

    int x; //Air Quality
    string y;

    cout << "Enter your Locality Name: ";
    getline(cin, y);

    cout << "Enter the 8-hour mean level of ozone in micrograms/cubic meter: ";
    cin >> x;
    
    cout << "\nYou entered " << y << " an 8-hour mean level of " << x << " micrograms/cubic meter\n";

    if(x > 100){

        cout << y << " exceeds the 8-hour mean of 100 micrograms/cubic meter.\n";
    }

    if((x >=0) && ( x <= 50)){
        cout << y <<" has a rating of Good";
    }
    else if((x >= 51) && (x <= 100)){
        cout << y << " has a rating of Moderate";
    }
    else if((x >= 101) && (x <= 150)){
        cout << y << " has a rating of Unhealthy";
    }
    else if((x >= 151) && (x <= 200)){
        cout << " has a rating of Unhealthy";
    }
    else if((x >= 201) && (x <= 300)){
        cout << y << " has a rating of Very Unhealthy";
    }
    else{cout << y << " has a rating of Hazardous";}

    return 0;
}