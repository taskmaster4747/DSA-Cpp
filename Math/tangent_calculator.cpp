#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

void CalculateTangent();

int main(){
    
    CalculateTangent();
    return 0;
}

void CalculateTangent(){
    double angle_deg = 22.0;   // angle in degrees
    double base = 100.0;       // adjacent side
    
    double angle_rad = angle_deg * (M_PI / 180.0);
    
    double tan_value = tan(angle_rad);
    
    double a = base * tan_value;
    
    cout << fixed << setprecision(3);
    
    cout << "a = " << a << "metres" << endl;
}
