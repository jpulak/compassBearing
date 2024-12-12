//program for finding compas bearing based on heading

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// func prototypes

void getBearing(double heading, string &faceDir, double &deg, string &walkDir);
void displayBearing(double heading);

// main func

int main() {
    double heading;

    // get inputs
    
    cout << "Enter a compass heading [0-360 degrees]: ";
    cin >> heading;

    // validate with while loop
    
    while (heading < 0 || heading > 360) {
        cout << endl << "Error invalid heading entered.\n";
        cout << "Enter a compass heading [0-360 degrees]: ";
        cin >> heading;
    }

    // displayBearing func call
    
    displayBearing(heading);
    return 0;
}

// determine conventional bearing based on compass heading

void getBearing(double heading, string &faceDir, double &deg, string &walkDir) 
{
    if (heading == 0 || heading == 360) 
    {
    faceDir = "North";
    deg = 0.0;
    if (heading == 0) 
    {
        walkDir = "East";
    } 
    else 
    {
        walkDir = "West";
    }
    } 
    else if (heading == 90) 
    {
    faceDir = "North";
    deg = 90.0;
    walkDir = "East";
    } 
    else if (heading == 180) 
    {
    faceDir = "South";
    deg = 0.0;
    walkDir = "East";
    } 
    else if (heading == 270) 
    {
    faceDir = "North";
    deg = 90.0;
    walkDir = "West";
    }
    
    // edge cases done
    
    else if (heading > 0 && heading < 90) 
    { 
        faceDir = "North";
        deg = heading;
        walkDir = "East";
    } 
    else if (heading > 90 && heading < 180) 
    { 
        faceDir = "South";
        deg = 180.0 - heading;
        walkDir = "East";
    } 
    else if (heading > 180 && heading < 270) 
    { 
        faceDir = "South";
        deg = heading - 180.0;
        walkDir = "West";
    } 
    else if (heading > 270 && heading < 360) 
    {  
        faceDir = "North";
        deg = 360.0 - heading;
        walkDir = "West";
    }
}

// displayBearing func call

void displayBearing(double heading) 
{
    string faceDir, walkDir;
    double deg;

    // getBearing details func
    
    getBearing(heading, faceDir, deg, walkDir);

    // display formatted results
    
    cout << faceDir << " " << fixed << setprecision(1) << deg << " degrees " 
    << walkDir << endl;
}
