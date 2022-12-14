#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double area = 0;
    double radius = 0;
    const double pi = 3.14;
    
    cout << "Enter a radius" << endl;
    cin >> radius;
    
    area = pi*pow(radius,2);
    cout << area;

    return 0;
}
