//
//  functions.cpp
//  inClassPractice
//
//  Created by Anderson Dauer on 9/2/21.
//  Created for practice purposes in class
//

#include <iostream>
using namespace std;

double input()
{
    double side;
    
    cin >> side;
    
    return side;
}

int main()
{
    double length, width;
    
    cout << "Enter length of rectangle: " << endl;
    length = input();
    cout << "Enter width of rectangle: " << endl;
    width = input();
    
    cout << "Length is: " << length << " Width is: " << width << endl;

    return 0;
}
