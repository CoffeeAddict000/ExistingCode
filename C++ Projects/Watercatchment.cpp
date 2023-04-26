#include <iostream>
#include <cmath>

int main(){
    double height; //height
    double radius; //radius
    double timestep; //number of time steps
    double volume;
    double pi = 3.14159265;
    double gallons = 0.004329;
    double heightAtCV;
    double currentVolume;
    double volumelost; 

    std::cout << "Enter the height of the cylindrical tank, in inches: ";
    std::cin >> height;

    if((height>=70) && (height<=240)){
     height == height;
    }
    else { std::cout << "ERROR: The height must be in the range [72-240]. Please try again.\n\n";
    }
    std::cout << "Enter the radius of the cylindrical tank, in inches: ";
    std::cin >> radius;
    if((radius>=2) && (radius<=36)){
     radius == radius;
    }
    else{ std::cout << "ERROR: The height must be in the range [2-36]. Please try again.\n\n";}
    std::cout << "Enter the number of time steps, in seconds: ";
    std::cin >> timestep;
    if((timestep>=1) && (timestep<=100)){
     timestep == timestep;
    }
    else{ std::cout << "ERROR: The height must be in the range [1-100]. Please try again.\n";}

    std::cout << "\nYou entered a height of " << height << " inch(es)";
    std::cout << "\nYou entered a radius of " << radius << " inch(es)";
    std::cout << "\nYou entered " << timestep << " second(s)";

    //v=pi.r^2.h
    volume = pi * (radius * radius) * height;
    std::cout << "\nThe initial volume is " << volume * gallons  << " gallon(s)\n";

    while(timestep > 0 && volume > 0){
            double velocity = 8.02 * sqrt(height);
            volumelost = velocity * (4 * pi) * timestep;
            currentVolume = volume - volumelost;
            heightAtCV = currentVolume / (pi * radius * radius);
            break;} 
    
    std::cout << "After " << timestep << " second(s):\n";

    if(currentVolume <= 0 || heightAtCV <= 0){
        std::cout << "Volume of the Tank has reached ZERO!";
    }else{std::cout << "  Volume lost: " << volumelost * gallons << " gallons(s)\n";
        std::cout << "  Height at Timstep: " << heightAtCV  << "\n";}
    



    return 0;
}