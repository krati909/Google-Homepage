#include <iostream>
using namespace std;
  
class constructor
{
    int* p;
  
public:
    constructor()
    {
        p = new int[2]{ 1, 2};
  
        for (int i = 0; i < 2; i++) {
            cout << p[i] << " ";
        }
  
        cout << endl;
    }
};
  
int main()
{
    constructor* ptr = new constructor[5];
}