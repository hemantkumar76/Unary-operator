#include <iostream>
#include <math.h>
using namespace std;
class unary
{
private:
    int a;

public:
    unary()
    {
        a = 0;
    }
    unary(int x)
    {
        a = x;
    }
    void display()
    {
        cout << "a is " << a << endl;
    }
    unary operator-()
    {
        unary temp;
        temp.a = -a;
        return temp;
    }
};
int main()
{
    unary u1(500), u2;
    u2 = -u1;
    u1.display();
    u2.display();
    return 0;
}
