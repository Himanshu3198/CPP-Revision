#include <bits/stdc++.h>
using namespace std;

class Calculate
{

private:
    int a, b;

public:
    //    int add(int x,int y){
    //
    //         return (x+y);
    //    }
    int add(int x, int y); // constructor

    int product(int a1, int b1)
    {
        // The 'this' pointer is used to retrieve the object's a1 b1
        // hidden by the local variable 'a,b'
        this->a = a1;
        this->b = b1;

        return (a1 * b1);
    }
};

// member function access using scope resolution operator
int Calculate::add(int c, int d)
{
    // cout<<c+d<<"\n";
    return (c + d);
}

int main()
{

    Calculate h;
    cout << h.add(5, 4) << "\n";
    cout << h.product(2, 2) << "\n";

    return 0;
}