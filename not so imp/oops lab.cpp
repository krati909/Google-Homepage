/* C++ program to create an object of a class 
and access class attributes */

#include <iostream>
#include <string>
using namespace std;


class Student {
public: 
    int rollNo; 
    string stdName; 
    float perc; 
};

int main()
{
 
    Student std;

    std.rollNo = 101;
    std.stdName = "Shivang Yadav";
    std.perc = 98.20f;

    cout << "Student's Roll No.: " << std.rollNo << "\n";
    cout << "Student's Name: " << std.stdName << "\n";
    cout << "Student's Percentage: " << std.perc << "\n";

    return 0;
}