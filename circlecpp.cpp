#include <iostream>
#include "circle1.h"
using namespace std;


int main(){
    circle donut;
    double area = donut.getarea();
    cout << "area of donut is = " << area << endl;

    circle pizza(30);
    area = pizza.getarea();
    cout << "pizza's area is = " << area << endl;
}

