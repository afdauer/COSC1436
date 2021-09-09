//
//  decimals.cpp
//  decimals
//
//  Created by Anderson Dauer on 9/9/21.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
     float num = 7;
     float num2 = 4.15243;
     float num3 = 4.15643;

     cout << "num = " << num << endl;  //output num = 7

     cout << fixed; //push display decimal number
     cout << "num = " << num << endl;  //output num = 7.000000

     cout << setprecision(2); //set up 2 decimal digits
     cout << "num = " << num << endl;  //output num = 7.00

     cout << "num2 = " << num2 << endl;  //output num2 = 4.15
     cout << "num3 = " << num3 << endl;  //output num3 = 4.16

     system("pause");
     return 0;
}
