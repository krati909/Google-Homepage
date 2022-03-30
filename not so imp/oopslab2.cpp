#include <iostream>
using namespace std;

int main()
{
    int point1, point2, TotalDistance;
    
    cout << "Enter two integers: ";
    cin >> point1 >> point2;

    // sum of two numbers in stored in variable sumOfTwoNumbers
    TotalDistance = point1 + point2;

    // Prints sum 
    cout << point1 << " + " <<  point2 << " = " << TotalDistance;     

    return 0;
}