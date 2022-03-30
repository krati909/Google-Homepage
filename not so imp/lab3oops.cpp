#include <iostream>
using namespace std;
 
class construct
{
public:
    int ans;
     
    construct()
    {
        ans = 0;
    }
     
    construct(int a, int b)
    {
        ans = a * b;
    }
     
    void disp()
    {
        cout<< ans<< endl;
    }
};
 int main()
{
    construct o;
    construct o2( 2, 10);
     
    o.disp();
    o2.disp();
    return 1;
}