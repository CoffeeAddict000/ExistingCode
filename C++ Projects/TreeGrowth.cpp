#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;

int main(){
    double mass;
    int age;

    cout << "Enter the Mass of the Tree: ";
    cin >> mass;

    cout << "Enter the Age in Years: ";
    cin >> age;

    cout << "You entered the mass of " << mass << " and an age of " << age << " years.\n";

    for(age = 1; age++)
    {
        std::cout << "At " << age << " years, tree mass is: " << pow((mass*age),(1/4)); 
    }
    
    return 0;
}